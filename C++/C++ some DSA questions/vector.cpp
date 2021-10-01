#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // int size = v.size();
    // for(int i = 0 ; i < size ; i ++){
    //     v.push_back(i); 
    // }
    
    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    int arr[]={1,2,3,4,5,6,7,8,9};
    int sum=7,i,j;
    for( i =0 ; i< sizeof(arr) ; i++){
        for( j= 1 ; j< sizeof(arr) ; j++){
            if(sum == arr[i]+arr[j]);
            break;
        }
    }
    cout<<arr[i]<<" "<<arr[j];
    
    return 0;  
} 