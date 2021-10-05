def prime( i, primes ):
    for prime in primes:
        if not( i == prime or i % prime ):
            return False
    primes.append(i)
    return i
    
def historic( n ) :
    n = n + 5
    primes = []
    i , p = 2 , 0
    while True :    
        if prime( i , primes ) :
            p += 1
            if p == n:
                return primes
        i += 1

def solution(i):
    prime_list = historic(i)
    prime_str = map(str , prime_list)
    prime_str = ''.join(prime_str)
    return (prime_str[i:i+5])
