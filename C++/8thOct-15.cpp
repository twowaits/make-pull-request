#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
       int row=0;
       int nsp=n-1;
       int nmsp=row+1;
       while(row<n)
       {
    	   int csp=0;

    	   while(csp<nsp)
    	   {
    		   cout<<" ";
    		   csp++;
    	   }
    	   nsp--;
    	   if(row==0)
    	   {
    		   cout<<"*";
    	   }
    	   else if(row==n-1)
    	   {
    		   int cns=0;
    		   int nss=n-1;
    		   while(cns<nss)
    		   {
    			   cout<<"* ";
    			   cns++;
    		   }
    		   cout<<"*"<<endl;
    	   }
    	   else
    	   {
    		   cout<<"*";
    		   int cmsp=0;

    		   while(cmsp<nmsp)
    		   {
    			   cout<<" ";
    			   cmsp++;
    		   }

    		   cout<<"*";
    		   nmsp+=2;
    	   }
    	   row++;
    	   cout<<endl;
       }
return 0;
}

