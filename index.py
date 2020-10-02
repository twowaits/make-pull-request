print("Hello world!")
print("Test pull request...")




# made use of class
class perDetail:
    roll_no = 0
    name = ""
    age = 0
    
    def __init__(self):
        self.roll_no = 1
        self.name = "XYZ"
        self.age = 16
        
perDetail = perDetail()
perDetail.roll_no = input('Enter your Roll No.: ')
perDetail.name = input('Enter your Name: ')
perDetail.age = int(input('Enter your Age: '))
print()
print('****** YOU ENTERED *****')
if perDetail.age<12:
    print(perDetail.roll_no, perDetail.name, perDetail.age,sep='    ')
    print('You are just a Kid!')
elif perDetail.age>=12 and perDetail.age<19:
    print(perDetail.roll_no, perDetail.name, perDetail.age, '->TEEN<-', sep='    ')
elif perDetail.age>=19 and perDetail.age<65:
    print(perDetail.roll_no, perDetail.name, perDetail.age, '->ADULT<-', sep='    ')
elif perDetail.age>=65:
    print(perDetail.roll_no, perDetail.name, perDetail.age, '->ELDERLY<-', sep='    ')
else:
    print('Invalid Credential!')
    
    
print("Test pull request..")
name1= input("Please Enter your full name: ")
age=int(input("Enter your age : "))
user_id=input("Enter your email id :")
gender=input("Enter your gender : ")
print("Your details are as follows : ")
print(f"Your name is : {name1}")
print(f"Your age is : {age}")
print(f"Your user id is  : {user_id}")
print(f"Your gender is  : {gender}")
