#include<bits/stdc++.h>
using namespace std;
#define int  long long
#define vc vector<int> 
#define F first
#define S second
#define eb emplace_back


     void print_binary(int n){
         stack<int> s;
         while(n){
             s.push(n%2);
             n/=2;
         }
         while(!s.empty()) {
             cout<<s.top();
             s.pop();
         }
     }
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        print_binary(i); if(i!=n)cout<<", ";
    }

}
