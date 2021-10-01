Take input the value of 'n', upto which you will print.
-Print the Fibonacci Series upto n while replacing prime numbers, all multiples of 5 by 0.
Sample Input :
12
27

Sample Output :
1 1 0 0 0 8 0 21 34 0 0 144
1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418
  
  
  solution-
  #include<bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
  if(n<=1)
    return false;

  for(int i=2; i*i<=n; i++)
  {
    if(!(n%i))
      return false;
  }
  return true;
}

void fibo(int n)
{
  int f1=1;
  int f2=1;
  int f3 = f1+f2;
  for(int i=0; i<n; i++)
  {
    if(f1%5==0 || isprime(f1))
      cout<<0<<" ";    
    else
      cout<<f1<<" ";
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;
  }
}

int main()
{
  int n;
  cout<<"Enter n, number of terms:- ";
  cin>>n;
  fibo(n);
  return 0;
}
