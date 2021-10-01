/* Fibonacci Series with a Twist

 Add following functionalities to it :

Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144
1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418
*/

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num){
    if (num <= 1)
        return false;
    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int main(){
   int num;
   int first = 0, second = 1;
   int nextTerm = first + second;
   cout<<"Enter the number of terms: ";
   cin >> num;
   cout << second << " ";
   for(int i = 3; i <= num+1; i++) {
    if(nextTerm % 5 == 0){
        cout << 0 << " ";
    }
    else if(is_prime(nextTerm)){
        cout << 0 << " ";
    }
    else{
        cout << nextTerm << " ";
    }
    first = second;
    second = nextTerm;
    nextTerm = first + second;
  }

  return 0;
}
