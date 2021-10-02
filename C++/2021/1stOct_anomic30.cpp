//author: anomic30
#include <iostream>
#include <vector>
using namespace std;

vector<int> primeSieve(1000000000);

//Function to precalculate prime numbers and store it inside primeSieve vector
//primeSieve[i]==0 (means its a prime number)
//primeSieve[i]==1 (means its a composite number) 
void generatePrime(){
    primeSieve[1] = 1;
    for(int i=2;i<=sqrt(1000000000);i++){
        if(primeSieve[i]==0){
            for(int j=i*i;j<=1000000000;j=j+i){
                primeSieve[j]=1;
            }
        }
    }
}

//Checking for multiple of 5
bool multipleCheck(int n){
    if(n%5==0){
        return true;
    }
    return false;
}

int main(){
    generatePrime();
    int n;
    cin >> n;
    int a = 1, b = 1, c;
    cout << a << " " << b << " ";
    for (int i = 2;i<n;i++){
        c = a + b;
        if(primeSieve[c]==0 || multipleCheck(c)){
            cout << 0 << " ";
        }else{
            cout << c << " ";
        }
        a = b;
        b = c;
    }
    return 0;
}