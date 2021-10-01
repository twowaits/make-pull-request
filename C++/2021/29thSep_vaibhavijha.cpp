#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	sortColors(v);
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
}
