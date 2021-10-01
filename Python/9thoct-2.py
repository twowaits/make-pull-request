def fact(n):
    if(n<1):
        return 1
    else:
        return n*fact(n-1)

def main():
    print("Enter number: ")
    inp=input()
    a,b=map(int,inp.split())
    res=fact(min(a,b))
    print(res)

main()