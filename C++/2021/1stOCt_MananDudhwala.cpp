#include <iostream>
using namespace std;

int isPrime(int n)
{
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return 0;
  
    return 1;
}
 

int main() {
    int num, term1 = 0, term2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= num; ++i) {
        if(i == 1) {
            cout << 1 << " ";
            continue;
        }
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
        
        int x = isPrime(nextTerm);
        int y = nextTerm%5;
        
        if(x==1 || y==0){
            cout<<0<<" ";
        }
        else{
            cout<<nextTerm<<" ";
        }
        
        
    }
    return 0;
    
}