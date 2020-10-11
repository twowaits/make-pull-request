#include <iostream>
using namespace std;

int main()
{
  int a=1,b=1,c,n;
 cout<<"Enter the number of elements: ";
 cin>>n;
 cout<<a<<" "<<b<<" "; //printing 1 and 1
 for(int i=3;i<=n;++i) //loop starts from 3 because 1 and 1 are already printed
 {
  c=a+b;
  cout<<c<<" ";
  a=b;
  b=c;
 }
   return 0;
}
