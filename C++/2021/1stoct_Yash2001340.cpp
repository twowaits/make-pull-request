#include<iostream>
#include<vector>
using namespace std;

int isprime(int sum)
{   
    int count=0;
    if(sum==2||sum%5==0)
    {
        return 0;
    }
    for(int i=2;i<sum/2;i++)
    {
        if(sum%i==0)
        {
            count+=1;
        }
    }
    if(count==0)
    {
        return 0;
    }
    else{
        return sum;
    }
}
void fibonacci(int n)
{ 
    int a=1,b=1;
    int sum=0;
    cout<<a<<" "<<b;
    
    
    
    for(int i=2;i<n;i++)
        {
            sum=a+b;
            int output=isprime(sum);
            cout<< " "<<output;
            a=b;
            b=sum;
        }
}

int main()
{
    cout<<"Enter the no of terms you want to print";
    int n;
    cin>>n;
    fibonacci(n);
   
   
}
