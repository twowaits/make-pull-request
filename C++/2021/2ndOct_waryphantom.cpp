// Author : waryphantom

// Program : To print a zig zag pattern
/*
Input  
4 8
Output
1          7
  2       6  8
    3   5
      4
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Function to print zig zag pattern
void print(int n, int m)
{
    int a[n][m];
    memset(a, 0, sizeof(a));
    int i = 0, j = 0;
    int k = 1;
    int flag = 1;
    while (j < m)
    {
        a[i][j] = k++;
        if (flag)
            i++;
        else
            i--;

        if (i == n)
        {
            i = n - 2;
            flag = 0;
        }
        else if (i == -1)
        {
            i = 1;
            flag = 1;
        }
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
                cout << " ";
            else
                cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

// Main function
int main()
{
    int first_num, second_num;
    cin >> first_num >> second_num;
    print(first_num, second_num);
    return 0;
}