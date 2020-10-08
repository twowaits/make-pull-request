//<<<<<<< master removed to resolve conflicts
#include <iostream> 
using namespace std; 

int main() 
{ 
    int n ;
    cin>>n; 
  
   int i, j, k = 0; 
    for (i = 1; i <= n-1; i++) 
    { 
        
        for (j = i; j < n; j++) { 
            cout << " "; 
        } 
        
        while (k != (2 * i - 1)) { 
            if (k == 0 || k == 2 * i - 2) 
                cout << "*"; 
            else
                cout << " "; 
            k++; 
            ; 
        } 
        k = 0; 
        cout << endl; 
    } 
   
    for (i = 0; i <= n-1; i++) { 
        cout << "* "; 
    } 
} 
=======

#include <iostream>

using namespace std;

void hollowPyramid(int n){
    
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        
        if(i==1 || i==n){
            for(int j=1;j<=i;j++)
            cout<<"* ";
        }
        else{
            cout<<"*";
            for(int j=1;j<=2*i-3;j++)
            cout<<" ";
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cin>>x;
    hollowPyramid(x);
    return 0;
}
//>>>>>>> master removed to resolve conflicts
