def palindrome(n):
    while(True):
      if(str(n)==str(n)[::-1]):
          break
      else:
          n+=1
          continue
    return n
if __name__ == '__main__':
    n=int(input("Enter the numbers you want:-"))
    numbers=[]
    list=[]
    for i in range(n):
        num=int(input("Enter Number"))
        numbers.append(num)
    print(numbers)
    for i in range(n):
        list.append(palindrome(numbers[i]))
    print("Palindrome of each number is:-")
    print(list)

