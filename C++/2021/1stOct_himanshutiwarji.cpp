#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number ;
    cin >> number;

    int temp = number;
    int temp1 = number;
    int sum = 0;
    int count=0;

   while(temp != 0)
    {   
        count++;
        temp = temp / 10;
    }
    while(temp1 != 0)
    {
        int a = temp1 % 10;
        sum = sum + pow( a, count);
        temp1 = temp1 / 10;
    }
    cout<< sum;
    if (sum == number)
    cout<< " armstrong number";

    else
    cout<<"not armstrong";

    return 0;
}