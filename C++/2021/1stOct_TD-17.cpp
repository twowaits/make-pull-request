#include <iostream> 
 
using namespace std;  

bool isPrime(int n)
{
 if (n <= 1)
    return false;
  
 for (int i = 2; i < n; i++)
 {
    if (n % i == 0)
        return false;    	
 }

  return true;
}

int main() 
{ 
 int n1 = 0, n2 = 1, n3, i, number;     
 cin >> number;    
 cout << n2 <<" ";    
 
 for(i = 2; i < number+1; i++)    
 {    
  n3 = n1+n2; 
  if(n3%5 == 0) //If n3 is divisble by 5.
   cout << "0 ";
  else if(isPrime(n3)) //If n3 ia a prime number.
   cout << "0 ";
  else    
   cout << n3 << " ";    
  n1 = n2;    
  n2 = n3;    
 } 
    
 return 0;
   
}  
