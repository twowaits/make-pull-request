#include <bits/stdc++.h>
using namespace std;

int main() 
 {    
     int n,i,ele[n];
     cout<<"Enter the number of elements:";
     cin>>n;
     for(i=0;i<n;i++)
     cin>>ele[i];
     int initial=0,mid=0,last=n-1;
     while(mid<=last)
     {
         if(ele[mid]==0)
          {
              swap(ele[initial],ele[mid]);
              initial++;
              mid++;
          }
          else if(ele[mid]==2)
           {
               swap(ele[last],ele[mid]);
               last--;
           }
         else 
           mid++;
     }
     cout<<"The sorted array is:"; 
     for(i=0;i<n;i++)
     cout<<ele[i]<<" ";
     cout<<endl;
     return 0;
}