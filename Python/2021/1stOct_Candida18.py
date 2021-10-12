def prime(num):
    if num > 1:
        for i in range(2, num // 2 + 1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False      


if __name__ == "__main__":
    no = int(input("Enter a number : "))
    fibo = [0,1]

    for i in range(2, no+1):
        fibo.append(fibo[i-1] + fibo[i-2])
    
    for i in range(0,no+1):
        if(prime(fibo[i]) or fibo[i] % 5 == 0) :
            fibo[i] = 0
    
    for i in range(1,no+1):
        print(fibo[i])


"""
Output : 

Enter a number :  12

1
1
0
0
0
8
0
21
34
0
0
144

"""
