//code added by Anuj
#include <iostream>
using namespace std;

void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void sort012(int a[],int size){
    int low=0;
    int high=size-1;
    int mid=0;
    
    while(mid<=high){
        if(a[mid]==0){
            swap(a,low,mid);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a,mid,high);
            high--;
        }
    }
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   sort012(a,n);
   
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
}
