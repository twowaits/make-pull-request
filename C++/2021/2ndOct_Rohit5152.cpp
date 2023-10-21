#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
   cin>>r>>c;

    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=c; j++)
        {
            if(i==j && i<r)
                cout<<j;
            else if(((i+j) % (r*2) == 0) && j<(r*2-1))
                cout<<j;
            else if((j-i) % (r*2-2) == 0)
                cout<<j;
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
