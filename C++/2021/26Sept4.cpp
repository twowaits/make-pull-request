#include<iostream>
#include<vector>
using namespace std;
void binary(int n)
{ 
  int rem,q;
  for(int i=1;i<=n;i++)
  {  q=i;
    vector<int> ans;
    while(q>0)
    {
    rem=q%2;
    q=q/2;
    ans.push_back(rem);
    }
   for(int j=ans.size()-1;j>=0;j--)
     cout<<ans[j];
     cout<<endl;
  }
}
  
int main()
{
  int n;
  cout<<"Enter number till you want binary numbers";
  cin>>n;
  binary(n);
  return 0;
}
