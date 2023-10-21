#include<bits/stdc++.h>
using namespace std;
bool is_Prime(int n)
{
if (n==1) return false;
for (int i = 2; i*i<=n; i++)
{if(n%i==0) return false;}
return true;
}

int main()
{
int n;
cout<<"Enter the number of terms required:";
cin>>n;
int a=1,b=1,res;
cout<<a<<" "<<b<<" ";
for(int i=2;i<n;i++)
{
res=a+b;
if(res%5==0 && !is_Prime(res))
cout<<0<<" ";
else if(is_Prime(res))
cout<<0<<" ";
else
cout<<res<<" ";
a=b;
b=res;
}
return 0;
}
