#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main () {
    int i, n;
    char arr[50];
    cin>>arr;
    n = strlen(arr);
    for (i = n-1; i >= 0; i--) cout<<arr[i];
    return 0;
}
