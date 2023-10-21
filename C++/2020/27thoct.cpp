#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter A Number";
  int decimal,number;
  cin>>number;
  
  int binary[10],i;
  int remainder,temporary;
  for(int j=1;j<=number;j++)
  {
    
    decimal=j;
    i=0;
  while(decimal>0)
    
  {
  remainder=decimal%2;
  binary[i]=remainder;
  i++;
  decimal=decimal/2;
  }
  cout<<endl<<j<<" -> ";
  for(int k=i-1;k>=0;k--)
  {
  cout<<binary[k];
  }
  }
  return 0;
  }
