//Program to Print matrix in spiral form
#include <bits/stdc++.h>
using namespace std;

int main() 
 {       
 
    int n,i,j,k,l,m;
    cin>>n;
    int A[n][n];                                 //it is a matrix which stores the numbers in spiral form
    int row_start=0,row_end=n,coloum_start=0,coloum_end=n,flag=0;
    for(i=1;i<=n*n;)                             //this will run from 1 to n*n
    { if(flag==0)                                //flag=0 is when we have to run loop from left to right
        {
            for(j=coloum_start;j<coloum_end;j++)        
            {
                A[row_start][j]=i;
                i++;
            }
         flag=1;                                //will make flag=1 so that next time it runs from top to bottom
         coloum_end--;
         row_start++;
        }
       else if(flag==1)                        //flag=1 is when we have to run loop from top to bottom 
        {
            for(k=row_start;k<row_end;k++)
            {
                A[k][j-1]=i;
                i++;
            }
            flag=2;
            row_end--;
        }
        else if(flag==2)                    //flag=2 is when we have to run loop from right to left
        {
            for(l=coloum_end-1;l>=coloum_start;l--)
             {A[k-1][l]=i;
               i++;
             }
           coloum_start++;  
           flag=3;
        }
        else if(flag==3)                  //flag=3 is when we have to run loop from bottom to top
        {
            for(m=coloum_end-1;m>=row_start;m--)
            {
                A[m][l+1]=i;
                i++;
            }
            flag=0;  

        }
    }
                                          // To Print the matrix 
    cout<<"[";
    for(i=0;i<n;i++)
    {cout<<"[";
     for(j=0;j<n;j++)
     {   if(j==n-1&&i!=n-1)
         cout<<A[i][j]<<"],";
         else if(j==n-1&&i==n-1)
        cout<<A[i][j]<<"]]";
         else 
         cout<<A[i][j]<<", ";
     }
     cout<<endl;
    }
    

     
	return 0;
}

/*Sample input
 n=6
 Sample output
 [[1, 2, 3, 4, 5],
[16, 17, 18, 19, 6],
[15, 24, 25, 20, 7],
[14, 23, 22, 21, 8],
[13, 12, 11, 10, 9]]

 */ 


