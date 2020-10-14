#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[5] = {1, 7, 0, 9, 12};
    int max_element = -1;
    int min_element = INT_MAX;
    for(int i = 0;i < 5;i++){
      max_element = max(max_element,arr[i]);
      min_element = min(min_element,arr[i]); 
    }
    //Assuming max_element-min_element+1 is < 10000000.
    int * bucket = new int[max_element-min_element+1];
    int sz = max_element-min_element+1;
    for(int i = 0;i < sz;i++){
        bucket[i] = -1;
    }
    for(int i = 0;i < 5;i++){
        bucket[arr[i]-min_element] = arr[i];
    }
    
    for(int i = 0,j = 0;i < sz && j < 5;i++){
      if(bucket[i] != -1){
          arr[j++] = bucket[i];
      }
    }

   delete [] bucket;
   int ptr1 = 0;
   int ptr2 = 1;
   int max_gap = -1;
   for(;ptr2 < 5;ptr1++,ptr2++){
      max_gap = max(max_gap,arr[ptr2]-arr[ptr1]);
   }
   cout << max_gap;
}
