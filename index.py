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
