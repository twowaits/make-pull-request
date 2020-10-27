#include<iostream.h>
#include<conio.h>

int main()
{
int first=0,second=1,i,n,sum=0;
cout<<"Enter the number of terms:";
cin>>n;    // accepting terms
cout<<"Fibonacci series:";
cout<<"1 ";
for(i=2;i<=n;i++)
{
sum=first+second;
first=second;
second=sum;

cout<<sum<<" ";
}
return 0;
}