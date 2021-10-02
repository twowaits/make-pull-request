/*
Add following functionalities to it :

Take input of number of rows and columns.
Print the following zigzag pattern.
Sample Input :
7 16

Sample Output :

1                       13
  2                  12   14
    3              11       15
      4          10           16
        5      9
          6  8
            7

*/



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            int newC = (j % ((r - 1) * 2));
            if (newC >= r)
            {
                newC = newC - r;
                newC = ((r - 1) - (newC + 1));
            }

            if(newC == i)
            {
                cout<<j + 1;
            }
            else
            {
                cout<<"  ";
            }
        }

        cout<<"\n";
    }
    return 0;
}



