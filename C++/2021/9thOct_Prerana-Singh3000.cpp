//Program in C++ to find GCD of factorial of two numbers

#include<iostream.h>
#include<conio.h>

int factorial(int x)
{
  if(x<=1)
    return 1;
  int fac = 2;
  for(int i=3; i<=x; i++)
  {
    fac *= i;
  }
  return fac;
}

int gcdOfFac(int a, int b)
{
  int min;
  if(a<b)
  {
    min = a;
  }
  else
  {
    min = b;
  }
  return factorial(min);
}

void main()
{
  clrscr();
  int m, n;
  cout<<"Enter any two numbers:";
  cin>>m>>n;
  cout<<"GCD of factorial of "<<m<<" and "<<n<<" is "<<gocOfFac(m, n);
  getch();
}
  
