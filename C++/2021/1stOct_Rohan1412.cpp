#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
  
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}


int main() {

int n, a = 0, b = 1, c = 0,temp;
while(scanf("%lld",&n)!=EOF){
 
    a = 0;
    b = 1;
    c = 0;

    
    for (int i =  1; i <= n+1; ++i) {
       
        if(i == 1) {
           
            continue;
        }
        if(i == 2) {
            cout << b << " ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        
        temp=c;

         if (c % 5 == 0 || isPrime(c))
        {
            cout << "0 ";
        }
        else
        {
           
            cout << c << " "; 
        }
    }
    cout<<endl;
}



  return 0;
}
