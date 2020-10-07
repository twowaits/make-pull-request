def main():
    54321
    table={0:'and',1:'tens', 2:'hundreds', 3:'thousands',4:None, 5:'lacs', 6:None, 7:'crores',8:None}
    n=input()
    num=[each for each in n]
    string=[]
    shift=len(num)-1
    for x in range(0,len(num)):
        if(x==len(num)-1):
            string.append(table[0])
            string.append(num[x])
            continue

        if(table[shift-x]==None):
            string.append(num[x])
            string.append(num[x+1])
            string.append(table[shift-x-1])

        elif(x!=0 and table[shift-x+1]==None):
            
            continue

        else:
            string.append(num[x])
            string.append(table[shift-x])
    string=' '.join(string)
    print(string)
main()