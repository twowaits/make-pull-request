def reversestring(strr):
    index = len(strr)
    revstr = ''
    while index > 0 :
        revstr += strr[index-1] 
        #Here we took string[index-1] cuz here len(ur_str)=11 but as per indexes its 10
        #So by index-1 we grab the last element in our string and add it in the start of revstr
        index -= 1
    print(revstr)
mystring = "Hello World"
reversestring(mystring)