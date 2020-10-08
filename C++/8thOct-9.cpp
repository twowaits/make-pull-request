#include <bits/stdc++.h>
using namespace std;

int main() 
 {  
   
    int n,i,j,k,l;
    cin>>n;
    
       for(i=0;i<n;i++)
       {
         for(j=0;j<n-i-1;j++)
         {
           cout<<" ";                  //for printing initial spaces 
         }
         cout<<"*";                    //printed first side of triangle
         if(i>0&&i<n-1)
         {
           for(k=1;k<=2*i-1;k++)        
            cout<<" ";
            cout<<"*";                 // printed the second side of triangle

         }
         if(i==n-1)
         {
           cout<<" ";
           for(l=1;l<=n-1;l++)
           cout<<"* ";                 // for printing the bottom side of the triangle
         }
         cout<<endl;
         

       }                                //end of first for loop

      
	return 0;
}
