#include<iostream>

using namespace std;
int main()
{
   int i, num[10], small, ssmall;
   cout<<"Enter any 10 elements for the array: ";
   for(i=0; i<10; i++)
      cin>>num[i];
   small = num[0];
   for(i=0; i<10; i++)
   {
      if(small>num[i])
         small = num[i];
   }
   ssmall = num[0];
   for(i=0; i<10; i++)
   {
      if(ssmall>num[i])
      {
         if(num[i]!=small)
            ssmall = num[i];
      }
   }
   cout<<"\nSecond smallest element = "<<ssmall;
   cout<<endl;
   return 0;
}