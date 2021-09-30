 #include <bits/stdc++.h>
 
 using namespace std ;
 
 // To check Prime
 bool prime(int n)
 {
  if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
 }
 // Driver code
 int main() 
 {
   int n ;
   cin >> n ;
   int t1 = 0;
   int t2=1 ;
   int nextTerm=0;
   for(int i=0 ;i< n ;i++)
   {
     if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << 0 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
   if(prime(nextTerm)) cout << 0 << " " ;
     // checking multiples of 5 
   else if(nextTerm%5==0) cout << 0 << " " ;
   else   cout << nextTerm << " " ; 
   }
 
 return 0 ;
 }
