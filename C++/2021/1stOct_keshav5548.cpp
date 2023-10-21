#include <bits/stdc++.h>
using namespace std;
 
void Fibonacci(int n)
{
    int Fibar[n];
 
    
    Fibar[0] = 1;
    Fibar[1] = 1;
    
    for (int i = 2; i < n; i++)
    {
        Fibar[i] = Fibar[i - 2] + Fibar[i - 1];
    }
    cout<<Fibar[0]<<" "<<Fibar[1]<<" ";
    
    for (int i = 2 ; i <n; i++)
    {
        int flag=0;
        for(int j=2;j<sqrt(Fibar[i]);j++)
            if(Fibar[i]%j==0)
            {
                flag=1;
            }
        if(Fibar[i]%5==0 || flag==0)
        {
            cout<<"0"<<" ";
        }
        else{
            cout<<Fibar[i]<<" ";
        }
    }
}
 

int main()
{
    int n;
    cin>>n;
    Fibonacci(n);
    return 0;
}