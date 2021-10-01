#include<iostream>
using namespace std;

int main()
{
    int i,n,table=1;

    cout<<"Enter any positive number :: ";
    cin>>n;

    cout<<"\nMultiplication Table of a given number [ "<<n<<" ] :: \n\n";
    for(i=1;i<=10;i++)
    {
        table=n*i;
        cout<<"\t"<<n<<" * "<<i<<" = "<<table<<"\n\n";
    }

    return 0;
}
