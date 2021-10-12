#include <bits/stdc++.h>   
using namespace std; 
bool search(int mat[5][5], int n, int x) 
{ 
    if (n == 0) 
        return false; 
    int smallest = mat[0][0], largest = mat[n - 1][n - 1]; 
    if (x < smallest || x > largest) 
        return false; 
    // set indexes for top right element 
    int i = 0, j = n - 1;  
    while (i < n && j >= 0) { 
        if (mat[i][j] == x) {  
            return true; 
        } 
        if (mat[i][j] > x) 
            j--; 
        else // if mat[i][j] < x 
            i++; 
    } 
  
     
    return false; // if ( i==n || j== -1 ) 
} 
  

int main() 
{ 
    int mat[5][5] = { { 1, 4, 7, 11, 15 }, 
                      { 2, 5, 8, 12, 19 }, 
                      { 3, 6, 9, 16, 22 }, 
                      { 10, 13, 14, 17, 24 },
					            { 18, 21, 23, 26, 30} 
					          }; 
	int value;
	cin>>value;				
    if(search(mat, 5, value)==true)
	cout<<"true";
	else
	cout<<"false"; 
  
    return 0; 
}
