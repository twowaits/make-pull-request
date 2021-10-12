Factorial Program in Java: Factorial of n is the product of all positive descending integers. Factorial of n is denoted by n!
   
  Factorial Program using loop in java
  Let's see the factorial Program using loop in java.
  
  #code
  class FactorialExample{  
 public static void main(String args[]){  
  int i,fact=1;  
  int number=5;//It is the number to calculate factorial    
  for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  System.out.println("Factorial of "+number+" is: "+fact);    
 }  
}

OUTPUT:
Factorial of 5 is: 120
  
