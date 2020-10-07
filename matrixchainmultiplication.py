

def matrix_product(p):
   
    length = len(p) # len(p) = number of matrices + 1

    m = [[-1]*length for _ in range(length)]
    s = [[-1]*length for _ in range(length)]

    matrix_product_helper(p, 1, length - 1, m, s)

    return m, s


def matrix_product_helper(p, start, end, m, s):


    if m[start][end] >= 0:
        return m[start][end]

    if start == end:
        q = 0
    else:
        q = float('inf')
        for k in range(start, end):
            temp = matrix_product_helper(p, start, k, m, s) \
                   + matrix_product_helper(p, k + 1, end, m, s) \
                   + p[start - 1]*p[k]*p[end]
            if q > temp:
                q = temp
                s[start][end] = k

    m[start][end] = q
    return q


def print_parenthesization(s, start, end):
   
    if start == end:
        print('A[{}]'.format(start), end='')
        return

    k = s[start][end]

    print('(', end='')
    print_parenthesization(s, start, k)
    print_parenthesization(s, k + 1, end)
    print(')', end='')


n = int(input('Enter number of matrices: '))
p = []
for i in range(n):
    temp = int(input('Enter number of rows in matrix {}: '.format(i + 1)))
    p.append(temp)
temp = int(input('Enter number of columns in matrix {}: '.format(n)))
p.append(temp)

m, s = matrix_product(p)
print('The number of scalar multiplications needed:', m[1][n])
print('Optimal parenthesization: ', end='')
print_parenthesization(s, 1, n)
