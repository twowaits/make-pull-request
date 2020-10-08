#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int ispace=-1,ospace=n+1;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<ospace;j++)
   cout<<" ";
  cout<<"*";
  if(ispace>0)
  {
   if(i==n-1)
    for(int j=0;j<ispace;j++)
    {
     if(j&1)
      cout<<"*";
     else cout<<" ";
    }
   else
    for(int j=0;j<ispace;j++)
     cout<<" ";
   cout<<"*";
  }
  cout<<endl;
  ispace+=2;
  ospace--;
 }
}
