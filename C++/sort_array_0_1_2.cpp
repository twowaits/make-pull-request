#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	int a[n];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	int low = 0,mid = 0,high = n-1;
	while(mid<=high){
		if(a[mid]==0){
            swap(a[low],a[mid]);
			low++;
			mid++;
			
		}else if(a[mid]==1){
			mid++;
		}else{
            swap(a[mid],a[high]);
			high--;
			
		}
    }
	for(int i = 0; i < n ; i++){
		cout<<a[i]<<" ";
	}




	return 0;
}