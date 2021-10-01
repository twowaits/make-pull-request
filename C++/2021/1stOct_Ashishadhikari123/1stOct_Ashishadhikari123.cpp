#include<iostream>
using namespace std;

bool checkForPrime(int variable3)
{
    if(variable3 == 2 || variable3 == 3)
    {
        return true;
    }
    int count = 0;
    for(int i =1 ;i < variable3/2;++i)
    {
        if(count >= 2)
        {
            break;
        }
        else
        if(variable3 % i == 0)
        {
            count+=1;
        }
    }
    if(count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void fibonacciSeries(int n)
{
    int i=2;
    int variable1 = 1,variable2 = 1;
    cout<<variable1<<" "<<variable2<<" ";
    while(i < n)
    {
        int variable3 = variable1 + variable2;
        bool check = checkForPrime(variable3);            //calling function to check whether number
                                                         //is prime or not
        if(variable3 % 5 == 0 || check == true)          
        {
            cout<<"0"<<" ";
        }
        else
        {
            cout<<variable3<<" ";
        }
        variable1 = variable2;
        variable2 = variable3;
        i+=1;
    }
}

int main()
{
    int n; 
    cin>>n;                                  
    fibonacciSeries(n);
    return 0;
}