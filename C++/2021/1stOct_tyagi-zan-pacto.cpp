#include<iostream>
#include<vector>
using namespace std;

int func_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        {
          return 0;
        }
    }
    return 1;
}

vector<int> func_fibonacciTwist(int n){
    vector<int>f;
    f.push_back(1);
    f.push_back(1);
    for(int i=2;i<n;i++){
        int num=f[i-1]+f[i-2];
        f.push_back(num);
    }
    for(int i=2;i<n;i++){
        if(f[i]%5==0 || func_prime(f[i])) 
        {
          f[i]=0;
        }
    }
    return f;
}



int main(){
    int n;
    cout<<"Number of terms: ";
    cin>>n;
    vector<int> series=func_fibonacciTwist(n);
    cout<<"The sequence is: ";
    for(int i=0;i<n;i++)
    {
        cout<<series[i]<<" ";
    }
    return 0;
}
