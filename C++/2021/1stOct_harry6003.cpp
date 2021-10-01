#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool isprime(int number)
{
  if(number<=1)
    return false;

  for(int i=2; i*i<=number; i++)
  {
    if(!(number%i))
      return false;
  }
  return true;
}

void fibonacci(int number)
{
  long int num1=1;
  long int num2=1;
  long int num3 = num1+num2;
  for(int i=0; i<number; i++)
  {
    if(num1%5==0 || isprime(num1))
      cout<<0<<" ";    
    else
      cout<<num1<<" ";
    num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
  }
}

int main()
{
  long int num;
  cout<<"Enter number of terms "<<endl;
  cin>>num;
  fibonacci(num);
  return 0;
}