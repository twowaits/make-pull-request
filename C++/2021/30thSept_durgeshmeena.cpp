// Sorting an Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        vector<int>v;
        int zero=0, one=0, two=0;

        int size;
        cin>>size;
        while(size--)
        {
            int val;
            cin>>val;
            if(val==0)zero++;
            else if (val==1)one++;
            else two++;
        }

        while(zero--)v.push_back(0);
        while (one--)v.push_back(1);
        while(two--)v.push_back(2);

        for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
        cout<<"\n";
        
    }


    return 0;
}