// Program to reverse the string entered by the user.
// The user can enter any no. of strings that he/she wants to. 
#include <iostream>
#include <vector>

using namespace std;

int main()
{  int n;
   char c = '1';
   string A;
  while(c =='1') 
  { 
   cout<<"Enter the string"<<endl;
   cin>>A;
   n = A.length();
   
   
   for(int i=n-1;i>=0;i--)
   {
      cout<<A[i];
       
   }
   
   cout<<"\n"<<"Enter 1 if you want to enter another string 0 if you don't want ton";          // 1 if you want to enter another string.
   cin>>c;
  }
   
      return 0;
}
