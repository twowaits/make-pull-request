//Fibonacci series upto n terms replacing prime numbers and those divisible by 5 to zero
//By RAYA_513

#include <iostream>
using namespace std;

int main()
{
    int n,a=1,b=0,c,i,temp;
    cout<<"Enter the value of n - ";
    cin>>n;
    cout<<"Fibonacci series upto n terms replacing prime numbers and those divisible by 5 - "<<endl;
    while(n>0)
    {
       int flag=0;
        c=a+b;
       temp=c;
       if(c<=1)
       {
           cout<<c<<" ";
       }
       if(c>1)
       {
        for(int i=2;i*i<=temp;i++)
        {
            if(temp%i==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==0 || temp%5==0 )
        {
            temp=0;
        }
        cout<<temp<<" ";
    }
        a=b;
        b=c;
        n--;
       
    }

    return 0;
}
