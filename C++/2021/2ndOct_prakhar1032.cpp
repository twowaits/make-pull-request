/*ZigZag Problem
Add following functionalities to it :

Take input of number of rows and columns.
Print the following zigzag pattern.
Sample Input :
7 16

Sample Output :

1                       13 
  2                  12  14
    3              11        15
      4          10             16
        5      9
          6  8
            7





Solution-----
*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows,col;
    cin>>rows>>col;
    vector<vector<int>>arr(rows,vector<int>(col,0));

    int row = 0, column = 0;
    bool upward = true; 

    for(int i=1; i<=col; i++){
        arr[row][i-1] = i ;
        if(row==0){     
           upward = false;
        }
        if(row==(rows-1)){
           upward = true;
        }
        if(upward) 
        row--;
        else  
        row++;
    }

    for (int j=0;j<rows;j++){
        for (int i=0;i<col;i++){
            if(arr[j][i]!=0)
                cout << arr[j][i] <<" ";
            else
                cout <<"  ";
        }
        cout<<endl;
    }
}
