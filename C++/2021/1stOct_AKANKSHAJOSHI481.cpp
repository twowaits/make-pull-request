#include <iostream>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int main() {
    
     int n, t1 = 1, t2 = 1, nextTerm = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if((isPrime(nextTerm)  == true) || (((nextTerm)%5 == 0))){
            cout << "0 " ;
        }
        else{
            cout << nextTerm << " ";
        }
        
    }
    return 0;

}