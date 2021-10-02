#include<iostream>
using namespace std;
int fibo(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibo(n-1) + fibo(n-2));
   }
}
int check(int n)
{
    int flag=0;
    for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
      }}
      if(n>1&&flag==0)
      return 0;
      else
      {
          if(n%5==0)
            return 0;
          else
            return n;
      }

}
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++)
    {
        a[i]=fibo(i);
    }
    for(int i=0;i<=n;i++)
    {
        a[i]= check(a[i]);
    }
    cout<<"Fibonacci series :";
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
