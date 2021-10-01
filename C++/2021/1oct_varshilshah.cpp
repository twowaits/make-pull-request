//finding the container with most water
//author-varshil shah

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int maxArea(int arr[],int n){
    int l=0,r=n-1,max1=0;
    while(l<r){
        int lh=arr[l];
        int rh=arr[r];
        int min1 = min(lh,rh);
        max1 = max(max1,min1*(r-1));
        if(lh<rh)
            l++;
        else
            r--;
    }
    return max1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxArea(arr,n);
}
