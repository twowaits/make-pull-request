#include<iostream>

using namespace std;
int facb(int n){
    // base case
    if(n==0 or n==1) return n;
    // recursive assumption
    int subprob1 = facb(n-1);
    int subprob2 = facb(n-2);
    // self work
    return subprob1 + subprob2;
}
int main()
{
    int a;
    cin>>a;
    cout << facb(a);

    // #ifndef ONLINE_JUDGE
    //     clock_t end = clock();
    //     cout<<"\n\nExecuted In: "<<double(end - begin)/
    //     #pragma en
    
    return 0;
}