#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    string str;
    getline (cin,str);
    int n=str.length(); 
    for(int i = 0;i<n/2;i++) 
        swap(str[i],str[n-i-1]);
    cout<<str; 
    return 0; 
}
