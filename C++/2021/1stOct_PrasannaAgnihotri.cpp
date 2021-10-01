#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n == 2 || n == 3){
        return true;
    }
    else if(n == 1 || n % 2 == 0 || n % 3 == 0 ){
        return false;
    } 

    for (int i = 5; i*i <= n; i = i + 6){
        if (n% i == 0 || n % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"ENTER THE VALUE OF n";
    cin >> n;
    vector<int> v(n);

    v[0] = 1;
    v[1] = 1;

    for(int i = 2; i < n; i++){
        v[i] =v[i-1] + v[i-2];
    }

    for(int i = 0; i < n; i++){
        if(v[i] % 5 != 0 && !isPrime(v[i])){
            cout << v[i] << " ";
        }
        else{
        	cout << "0" << " ";

		}
    }
    return 0;
} 
