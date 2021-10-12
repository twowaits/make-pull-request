def generatePrintBinary(n): 
   from Queue import Queue 
   q = Queue() 
      
   # Enqueue the first binary number 
   q.put("1") 
    
   while(n>0): 
        n-= 1 
        # Print the front of queue 
        s1 = q.get()  
        print s1
        s2 = s1
        q.put(s1+"0") 
        q.put(s2+"1") 
      
n = 10
generatePrintBinary(n)
