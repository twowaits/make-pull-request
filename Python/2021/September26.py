//Python program to Generate Binary Numbers.
// complexity O(n)
def generatebinarynumber(n):
    from Quene import Quene
    q = Quene()
    q.put("1")
    while(n>0):
        n- = 1
        x1 = q.get()
        print x1
        x2 = x1
        q.put(x1+"0")
        q.put(x2+"1")
// Test program        
n = 10
generatebinarynumber(n)
        
