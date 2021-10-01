#include<iostream>  
using namespace std;

int main ()
{
  
int n1 = 1, n2 = 1, n3, i, number;
  
cout << "Enter the number of elements: ";
  
cin >> number;
  
cout << n1 << " " << n2 << " ";
  
for (i = 2; i < number; ++i)
    
    {
      
n3 = n1 + n2;
      
if (n3 % 2 == 1 || n3 == 2 || n3 % 5 == 0)
	
cout << "0" << " ";
      
      else
	
cout << n3 << " ";
      
n1 = n2;
      
n2 = n3;
    
}
  
return 0;

}
// siddhant jha
