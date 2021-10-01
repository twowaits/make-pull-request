#include <iostream>
#include <vector>

using namespace std;
//Function to check if the number is prime or not
bool isPrime(int x)
{
    if (x == 0 | x == 1)
        return false;
    else
    {
        for (int i = 2; i <= x / 2; i++)
        {
            if (x % i == 0)
            {
                return false;
                break;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n; //number of elements
    int n1 = 0;
    int n2 = 1;
    int n3;
    vector<int> table;
    //pushing 1st and 2nd value to the vector manually
    table.push_back(n1);
    table.push_back(n2);

    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        table.push_back(n3);
    }
    cout << endl;
    //Printing Original Series using vector(STL)
    cout << endl
         << "``````````Original```````````" << endl;
    for (auto i = 1; i <= n; i++)
    {
        cout << table[i] << " ";
        if (isPrime(table[i]) || table[i] % 5 == 0)
        {
            table[i] = 0;
        }
    }
    //Printing Modified Series after replacing prime number,multiples of 5 by 0
    cout << endl
         << "``````````Modified```````````" << endl;
    for (auto i = 1; i <= n; i++)
    {
        cout << table[i] << " ";
    }
}
