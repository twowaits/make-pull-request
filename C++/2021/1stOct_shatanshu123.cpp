//Program to find all prime number between a given range without using array

#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low;
    cin >> low;

    int high;
    cin >> high;

    for (int num = low; num <= high; num++){
        int div = 2;
        while (div * div <= num){
            if (num % div == 0){
                break;
            }
            div++;
        }

        if (div * div > num){
            cout << (num) << endl;
        }
    }
}