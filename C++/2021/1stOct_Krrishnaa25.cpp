#include <iostream>
#include<math.h>
using namespace std;

        

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
     
    bool isPrime = true;

    cout << "Enter the number of terms: ";
    cin >> n;



    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
       
        if(i == 1) {
            

            cout << t2 << ", ";
            continue;
        }
       
       
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        

       

       
     

       
        if( nextTerm==1) {
             cout << nextTerm << ", ";
            continue;
        }
        else if( nextTerm <= 3) {
            cout << '0'<< ", ";
            continue;
        }

        else if(nextTerm%5 == 0 && nextTerm%2==0 ) {

           cout << '0'<<", ";
           continue;
        }
        
        else if(nextTerm%5 == 0 && nextTerm%3 == 0) {

           cout << '0'<<", ";
           continue;
        }

        else if( nextTerm%2==0 || nextTerm%3 == 0) {
             cout << nextTerm << ", ";
             continue;
         
        }
        

        if(nextTerm%5 ==0) {
            cout << '0'<<", ";
            continue;
        }
         
        
        bool prime = true;
        int sqRoot = sqrt( nextTerm);
        for(int j = 3; j<= sqRoot; j+=2) {
          
         
            if( nextTerm%j == 0) {
                prime = false;
                break;
            }
           

            
        }
        
      



     
        
        if(prime) {
            
            cout << '0'<< ", "; 
        }


        else {
            cout << nextTerm << ", ";
        }
        
       






        
    }

    
    return 0;
}





