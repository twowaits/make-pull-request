#include<bits/stdc++.h>
using namespace std;

void Fibonacci(int n)
{
    int t=0,z=0,a=1;
    int arr[n];
    arr[0]=1;
    for(int i=1;i<n;i++)
    {
        z=t+a;
        arr[i]=z;
        t=a;
        a=z;
    }
    
    int t2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%5==0)
            arr[i]=0;
        else
            {
                for(int j=1;j<=arr[i];j++)
                {
                    if(arr[i]%j==0)
                    {
                        t2++;
                    }
                }
                if(t2==2)
                {
                    arr[i]=0;
                }
            }
            t2=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    Fibonacci(n);
    return 0;
}