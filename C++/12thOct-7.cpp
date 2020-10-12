#include <bits/stdc++.h>
using namespace std;

int main() 
 {    
     int n,i;
     cin>>n;
     int A[n];
     for(i=0;i<n;i++)
     cin>>A[i];
     int start=0,mid=0,end=n-1;
     while(mid<=end)
     {
         if(A[mid]==0)
          {
              swap(A[start],A[mid]);
              start++;
              mid++;
          }
          else if(A[mid]==2)
           {
               swap(A[end],A[mid]);
               end--;
           }
         else 
           mid++;
     }

     for(i=0;i<n;i++)
     cout<<A[i]<<" ";
     cout<<endl;

	return 0;
}

