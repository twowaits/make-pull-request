

def check_prime(num):
    if num>1:
        for i in range(2,num):
            if(num%i)==0:
                flag=False
                break
        else:
            flag=True
    else:
        flag=False
    return flag

def fibonacci(num,f_num,s_num):
    while num>1:
        new_num=f_num+s_num
        f_num=s_num
        s_num=new_num
        if(check_prime(new_num)):
            print("0 ")
        else:
            print(str(new_num)+" ")
        num-=1
num=int(input("Enter number for fibonacci sequence: "))
print("1 ")
fibonacci(num,0,1)
