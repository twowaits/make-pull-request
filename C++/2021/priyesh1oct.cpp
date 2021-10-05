#include<bits/stdc++.h>

using namespace std;

bool isPrime(int number){
    if (number == 2 || number == 3){
        return true;
    }
    else if(number == 1 || number % 2 == 0 || number % 3 == 0 ){
        return false;
    } 

    for (int i = 5; i*i <= number; i = i + 6){
        if (number % i == 0 || number % (i + 2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    for(int i = 0; i < n; i++){
        if(arr[i] % 5 != 0 && !isPrime(arr[i])){
            cout << arr[i] << " ";
        }
        else{
        	cout << "0" << " ";

		}
    }
    return 0;
}
