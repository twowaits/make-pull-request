#include <iostream>
using namespace std;
void binary_number(int n)
{
    int bin_num[1000];
    int i=0;
    while (n>0) 
    {
        bin_num[i]=n%2 ;
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
        cout<<bin_num[j];
    cout<<endl;
}
void binary(int n)
{
    for(int i=0; i<=n; i++)
    {
        binary_number(i);
    }
}
int main()
{
    int n;
    cout << "Input: n=";
    cin >> n;
    cout << "\nOutput:" ;
    binary(n);
}
