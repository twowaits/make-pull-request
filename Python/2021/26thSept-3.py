def generateBinaryValues(num):
    # base condition
    if(num > 1):
        generateBinaryValues(num // 2)
    print(num % 2, end="")
  
  

if __name__ == "__main__":
    num = int(input())
  
    
    for i in range(1, num+1):
        generateBinaryValues(i)
        print(end=" ")
