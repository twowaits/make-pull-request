//Staircase Search in 2D Matrix


#include <bits/stdc++.h> 
  
using namespace std; 
  

int search(int mat[4][4], int n, int x) 
{ 
    if (n == 0) 
        return -1; 
    int smallest = a[0][0], largest = a[n - 1][n - 1]; 
    if (x < smallest || x > largest) 
        return -1; 
    // set indexes for top right element 
    int i = 0, j = n - 1;  
    while (i < n && j >= 0) { 
        if (mat[i][j] == x) { 
            cout << "n Found at "
                 << i << ", " << j; 
            return 1; 
        } 
        if (mat[i][j] > x) 
            j--; 
        else // if mat[i][j] < x 
            i++; 
    } 
  
    cout << "n Element not found"; 
    return 0; // if ( i==n || j== -1 ) 
} 
  
// Driver code 
int main() 
{ 
    int mat[4][4] = { { 10, 20, 30, 40 }, 
                      { 15, 25, 35, 45 }, 
                      { 27, 29, 37, 48 }, 
                      { 32, 33, 39, 50 } }; 
    search(mat, 4, 29); 
  
    return 0; 
} 
