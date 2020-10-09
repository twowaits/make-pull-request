# include <iostream>
using namespace std;

int fac(int n)
{
   if(n==0)
        return 1;
   else
    return n*fac(n-1);
}

int main()
{
    int a,b;
    cout<<"enter two numbers\n";
    cin>>a>>b;

    if(a<b)
    cout<<"the gcd of factorials of two numbers is : "<<fac(a)<<endl;
    else
     cout<<"the gcd of factorials of two numbers is : "<<fac(b)<<endl;
    return 0;
}
