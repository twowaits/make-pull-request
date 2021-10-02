#include <bits/stdc++.h>
using namespace std;

//Time Complexity O(n)
//Space Complexity O(n)
int trappingWater(int arr[], int n){
        int maxLeft[n],maxRight[n],level=0,water[n];

        maxLeft[0]=arr[0];
        for(int i=1;i<n;i++)
        maxLeft[i]=max(arr[i],maxLeft[i-1]);//finds maximum height to left of block
        
        maxRight[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--)
        maxRight[i]=max(arr[i],maxRight[i+1]);//finds maximum height to right of block
        
        for(int i=0;i<n;i++) {
        water[i]=abs(min(maxLeft[i],maxRight[i])-arr[i]);//minimum of maximum height-height of block=level of water stored above each building
        level+=water[i];
        }
        return level; 
    }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int result=trappingWater(a,n);
    cout<<result<<endl;
}
