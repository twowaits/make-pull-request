// This is my code
#include<bits/stdc++.h>
using namespace std;
void fib(int n)
{
    int temp=0,c=0;
    int a=1;
    int b[n];
    b[0]=1;
    for(int i=1;i<n;i++)
    {
        c=temp+a;
        b[i]=c;
        temp=a;
        a=c;
    }
    int temp2=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]%5==0)
            b[i]=0;
        else
            {
                for(int j=1;j<=b[i];j++)
                {
                    if(b[i]%j==0)
                    {
                        temp2++;
                    }
                }
                if(temp2==2)
                    b[i]=0;
                
            }
            temp2=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}
int main()
{
    int T;
    cin>>T;
    fib(T);
    return 0;
}
