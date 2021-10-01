// code to sort the array of 0,1, and 2

// concept line : what we basically do is we make three pointers low, mid and high ,low and mid points to at the starting index and high points towards the last index
// and then we start iterating over the given array while mid is less than or equal to high 
// inside of it if we find 0 the we basically swap it with low and incrment the pointers low and mid, if we find 1 the we simply increment the mid because mid was already pointing on it so just increment it.
// lastly if we find 2 the we decrement the high pointer which was pointing to last index and now points to last second index.
// repeat above steps for each iteration. 
#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>& nums,int a, int b){
    int temp = nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}

void sortIt(vector<int>& nums) {
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums,low,mid);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums,mid,high);
            high--;
        }
    }
}
int main(){
  int n; cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sortIt(v);
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
