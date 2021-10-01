#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the element of array : ";

    int arr[n];
    for( int i = 0 ; i < n ; i++){
        cin>>arr[i];

    }

    for(int i = 0 ; i<n-i; i++){
        for(int j = i +1 ; j<n ; j++){
            if (arr[j]<arr[i]);
            int temp=arr[j];
            arr[i]=arr[j];
            arr[i]=temp;
            
        }
    }
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}