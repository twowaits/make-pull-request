#include <iostream>
using namespace std;

    int main()
    {
        string s;
        int i,j,k,t;
        cin>>s;
        int len=s.length();
        for(t=0;t<len;t++)
        {
        for(i=0;i<len;i++)
        {
            if(i==t)
            continue;
            else
            {  
                for(j=0;j<len;j++)
                {
                   if(j==i || j==t)
                   continue;
                   else
                   {cout<<s[t];
                      cout<<s[i];
                    for(k=0;k<len;k++)
                    {
                    if( (k==i || k==j || k==t) && (len==4) )
                    continue;
                    else if( (k==t || k==i || k==j) && (len==3) )
                    {cout<<s[j]<<" "; break;}
                    else
                    {cout<<s[j];
                    cout<<s[k]<<" ";
                   }
                }
              }
           }  
         }
       }
     }
  }
