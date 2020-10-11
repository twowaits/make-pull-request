#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    int * fibonacci = new int[number];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for(int i = 2;i < number;i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    for(int i = 0;i < number;i++){
        cout << fibonacci[i] << " ";
    }

    delete [] fibonacci;
}
