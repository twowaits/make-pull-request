#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int i;
    char arr[50];
    cin>>arr;
    for(i = strlen(arr)-1; i >= 0; i--) 
    cout<<arr[i];
    return 0;
} 