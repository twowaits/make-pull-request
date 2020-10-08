#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter n: ";
    int n;
    cin>>n;
    int sp=n-1;
    int midsp=-1;
    for (int i=0;i<n-1;i++)
    {

        for(int j=0;j<sp;j++)
        {
            cout<<" ";

        }
        cout<<"*";
        for(int st=0;st<midsp;st++)
        {
            cout<<" ";
        }
        if(i!=0)
            cout<<"*";
        sp--;
        midsp+=2;

        cout<<endl;
    }
    for (int i=0;i<n;i++)
        cout<<"* ";
}
