def main():
    table={0:'and',1:'tens', 2:'hundreds', 3:'thousands',4:None, 5:'lacs', 6:None, 7:'crores',8:None}
    table2={0:'and',1:'ten', 2:'hundred', 3:'thousand',4:None, 5:'lac', 6:None, 7:'crore',8:None}
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
            temp=''.join(num[x:x+2])
            string.append(temp)
            # string.append(num[x+1])
            if(num[x]=='1'):
                string.append(table2[shift-x-1])
            else:
                string.append(table[shift-x-1])

        elif(x!=0 and table[shift-x+1]==None):
            
            continue

        else:
            string.append(num[x])
            if(num[x]=='1'):
                string.append(table2[shift-x])
            else: 
                string.append(table[shift-x])

    string=' '.join(string)
    print(string)
main()