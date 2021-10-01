//A USER FRIENDLY CODE FOR INVALID INPUT

#include <iostream>
using namespace std;

int primeToZero(int x)
{
    int c = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            c++;
    }
    if (c == 2)
        return 1;
    else
        return 0;
}

int multiple_of_five_to_zero(int x)
{
    if (x % 5 == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cout << "Enter number of terms to print : ";
    cin >> n;
    
//check for valid input
    while (n <= 0)
    {
        cout<<"Please enter a valid input"<<endl;
        cin>>n;
    }

//Problem code
    int x = 1, y = 0, z;
    int c1, c2;
    for (int i = 1; i <= n; i++)
    {
        z = x + y;
        x = y;
        y = z;
        c1 = primeToZero(z);
        c2 = multiple_of_five_to_zero(z);
        if (c1 == 1 || c2 == 1)
        {
            cout << "0 ";
        }
        else
        {
            cout << z << " ";
        }
    }
    return 0;
}
