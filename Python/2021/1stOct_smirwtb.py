# Program is divided in 3 parts
# Part 1 generate the list for Fibonacci Series
# Part 2 Make number 0 for the generated list of Fibonacci Series prime number
# Part 3 Make the number 0 for generate list of Fibonacci Series with number divisible by 5
# Now the program is completed and print out the Fibonacci Series with a Twist


n = int(input("Enter the number for Fibonacci Series with a Twist: "))

assert n != 0 and int(n) == n, "Enter the Positive number"  # If condition is not satisfied then show the error

ele1 = 0  # 1st Element
ele2 = 1  # 2nd Element
sum1 = 0  # Sum combination of 1st and 2nd element
lst = []

for i in range(1, n):
    lst.append(ele1)  # This will store the list of Fibonacci series
    sum1 = ele1 + ele2  # This will produce the second element for the series
    ele1 = ele2
    ele2 = sum1

for i in range(len(lst)):   # This will check for the Prime Number

    if lst[i] == 0 or lst[i] == 1:   # 0 and 1 are not prime so loop will bypass them
        continue

    elif lst[i] == 2:   # 2 is the starting point of prime so 0 value is assigned
        lst[i] = 0

    else:
        for j in range(2, lst[i]):
            if lst[i] % j == 0:
                break
        else:  # We did this otherwise the complete loop will not run then
            lst[i] = 0

for i in range(len(lst)):   # Checking for Divisibility of 5 and making it 0
    if lst[i] % 5 == 0:
        lst[i] = 0

print(lst)   # Final list is ready to serve
