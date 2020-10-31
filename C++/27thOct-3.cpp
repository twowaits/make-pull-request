
#include <iostream>
using namespace std;

void binary(int i);
int main()
{
        int i,n;
        cout<<"Enter the last value"<<endl;
        cin>>n;
        for(i=1;i<n;i++)
        {
            binary(i);
            cout<<", ";
       }
       binary(i);
       return 0;
}

void binary(int i)
{
        int j=0,r,s=1;
        while(i>0)
        {
            j=j+(i%2)*s;
            s=s*10;
            i=i/2;
        }
        cout<<j; 
}


