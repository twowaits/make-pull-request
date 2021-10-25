# Python program for expression tree

# An expression tree node
class Et:

	# Constructor to create a node
	def __init__(self , value):
		self.value = value
		self.left = None
		self.right = None

# A utility function to check if 'c'
# is an operator
def isOperator(c):
	if (c == '+' or c == '-' or c == '*'
		or c == '/' or c == '^'):
		return True
	else:
		return False

# A utility function to do inorder traversal
def inorder(t):
	if t is not None:
		inorder(t.left)
		print t.value,
		inorder(t.right)

# Returns root of constructed tree for
# given postfix expression
def constructTree(postfix):
	stack = []

	# Traverse through every character of input expression
	for char in postfix :

		# if operand, simply push into stack
		if not isOperator(char):
			t = Et(char)
			stack.append(t)

		# Operator
		else:

			# Pop two top nodes
			t = Et(char)
			t1 = stack.pop()
			t2 = stack.pop()
			
			# make them children
			t.right = t1
			t.left = t2
			
			# Add this subexpression to stack
			stack.append(t)

	# Only element will be the root of expression tree
	t = stack.pop()
	
	return t

# Driver program to test above
postfix = "ab+ef*g*-"
r = constructTree(postfix)
print ("Infix expression is")
inorder(r)
