// Take input the value of 'n', upto which you will print. Print the Fibonacci Series upto 'n' while replacing Prime numbers & all multiples of 5 by 0.
// Input    : 12
// Output   : 1 1 0 0 0 8 0 21 34 0 0 144
// Input    : 27
// Output   : 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418


#include<iostream>

using namespace std;


// Prime number check
bool isPrime(int e) {
    if (e<=1) return false;     // NOT to consider 1 as Prime

    // loop to check if the number is Prime
    // looping upto number/2 (i.e. e/2) as its efficient to check upto number/2 than upto the number itself,
    // as after number/2 it is not possible for a Prime number to be divisible by anything above the half of that number
    // NOTE: floor(sqrt(e)) can also be used to loop upto
    for (int i=2; i<e/2; i++)   
        if (e%i==0)             // if true, then the number is NOT Prime
            return false;

    return true;                // otherwise the number is Prime
}


// driver code
int main() {
    int n; cin>>n;              // inputting 'n' for range of Fibonacci series
    int n1=0, n2=1, n3=n1+n2;   // initializing 1st 3 Fibonacci numbers (i.e. 0 1 1)

    cout<<n2<<" ";              // as per problem given, Output will start from 1 (i.e. 1 1 2 3 5 ...)

    // loop to generate & print Fibonacci series according to problem
    // special Fibonacci : prints 0 if number is Prime or number is divisible by 5
    for (int i=2; i<=n; i++) {      // starting loop from 2, as 1st 2 numbers are already calculated (i.e. 0 1)
        if (isPrime(n3))            // checking if number is Prime
            cout<<0<<" ";
        else if(n3%5==0)            // checking if number is divisble by 5
            cout<<0<<" ";
        else                        // otherwise print that number
            cout<<n3<<" ";
        
        // swapping numbers for next iteration
        n1 = n2;
        n2 = n3;
        n3 = n2 + n1;
    }
    cout<<endl;

    return 0;
}