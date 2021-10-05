
#include<iostream>
using namespace std;

 bool prime_check(int n)
 {
  if (n <= 1){
        return false;
  }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
 }
 
 int main() 
 {
   int n ;
   cout<<"enter the range of fibonacci numbers:"<<endl;
   cin >> n ;
   int term1 = 1;
   int term2=1 ;
   int next_term=term1+term2;
   cout<<"the output is:"<<endl;
   for(int i=0 ;i< n ;i++)
   {
   if(term1 % 5==0) {
       cout << 0 << " " ;
   }
   else if(prime_check(term1)) 
   {
       cout << 0 << " " ;
   }
   else {
    cout << term1 << " " ;
   }
   term1=term2 ;
   term2=next_term ;
   next_term=term1+term2;
   }
   return 0;
   }





