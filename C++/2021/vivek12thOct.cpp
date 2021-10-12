/*
Code for "Generate Binary NUmbers"
Input :  2

Output:1
       10

Input :  5

Output:1
       10
       11
       100
       101
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int n)
{
    
    string s = bitset<64> (n).to_string();
     
    
    const auto loc1 = s.find('1');
     
    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}
 

int main()
{
    int n;
    cin>>n;
     
    //Function call
    for(int i=1;i<=n;i++)
    {
    cout << decimalToBinary(i)<<endl;
    }
    return 0;
}
