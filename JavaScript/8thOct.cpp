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
