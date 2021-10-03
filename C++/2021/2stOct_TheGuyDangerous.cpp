#include<iostream>
using namespace std;
int main()
{
   int row, column, i, j, k, digits;
   cout<<"Enter number of rows -"<<endl;
    cin>>row;
    cout<<"Enter number of columns -"<<endl;
    cin>>column;
    cout<<"Performing Task ..."<<endl<<endl;
   int pos[column];
    for (i = 0; i < column; i++)
    {

        if (i / (row - 1) % 2 == 0)
        {

            pos[i] = i % (row - 1);

        }
        else 
     {
          pos[i] = row - 1 - (i % (row - 1));
        }

    }




    for (i = 0; i < row; i++)

    {

        for (j = 0; j < column; j++)

        {

            if (pos[j] == i) 

            {

                cout << (j + 1);

            }

            else

            {

                for (k = j + 1; k != 0; k /= 10) 

                {

                    cout << " ";

                }

            }

            cout << " ";

        }

        cout << "\n";

    }
return 0;
} 
