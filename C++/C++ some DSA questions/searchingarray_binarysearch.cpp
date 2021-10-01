#include<iostream>
using namespace std;
int binarysearch(int arr[], int n , int key){
    int s=0, e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if ( arr[mid]==key){
            return mid;

        }
        else if ( arr[mid]>key){
            e= mid-1;
        }
        else {
            s= mid+1;
        }
    }
    return -1;

}
int main()
{
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : ";
    for(int i = 0 ; i <n; i++){
        cin>>arr[i];

    }

    int key;
    cout<<"enter the key : ";
    cin>>key;

    cout<<binarysearch(arr,n, key);
    return 0;
}