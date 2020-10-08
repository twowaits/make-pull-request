#include<bits/stdc++.h>
using namespace std;
// function for cheaking leap year
void leap(int n)
{
    if(n%400==0)
    {
        cout<<n<<" is a leap year";
    }
    else if (n%100==0)
    {
        cout<<"It is not a leap year";
    }
    else if (n%4==0)
    {
        cout<<n<<" is a leap year";   
    }
    else
    {
        cout<<"It is not a leap year";
    }
}
// function for checking prime number
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i*i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
// function for cheacking prime number between ranges by sieve of eranthoses
void SieveOfEratosthenes(int n) 
{  
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 
// function to check number is positive or negative
void check_sign(int n)
{
    if(n>0)
    isPrime(n)?cout<<n<<" is a prime number":cout<<n<<" is not a prime number";
    else
    {
        cout<<"Enter the valid number\n";
    }
}
int main() 
{
    system("cls");
    int n,i;
    // cout<<"Enter an year\n";
    cout<<"Enter a number\n";
    cin>>n;
    leap(n);    
    check_sign(n);
    check_sign(n);
    SieveOfEratosthenes(n);
}