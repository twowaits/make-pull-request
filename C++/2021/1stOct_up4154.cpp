 #include <bits/stdc++.h>
 using namespace std ;
bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
 int main() 
 {
   int n ;
   cin >> n ;
   int a =1;
   int b=1 ;
   for(int i=0 ;i< n ;i++)
   {
   if(a%5==0) cout << 0 << " " ;
   else if(isprime(a)) cout << 0 << " " ;
   else 
      cout << a << " " ;
   a=b ;
   b=a;
   }
 return 0 ;
 }
