#include <bits/stdc++.h>
using namespace std;
 // this question is based on Kadane's algorithm
/*
  but the twist being that if the current element is negative then the min till now will become maximum and maximum*arr[i] will become negative.
  also in case of presene of 0s and/or all negative numbers, we have to handle it using flag var
*/
int maxSubarrayProduct(int arr[], int n)
{
    int mx_end = 1;
    int mn_end = 1;
    int max_so_far = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0) // case 1: when curr arr element > 0
        {
            mx_end = mx_end * arr[i];
            mn_end
                = min(mn_end * arr[i], 1);
            flag = 1;
        }
        else if (arr[i] == 0) {
            mx_end = 1;
            mn_end = 1;
        }
 
        else { // case 3: when curr arr element < 0 -> max_ending_here and min_ending hee will interchange
            int temp = mx_end;
            mx_end
                = max(mn_end * arr[i], 1);
            mn_end = temp * arr[i];
        }

        if (max_so_far < mx_end)
            max_so_far = mx_end;
    }
    if (flag == 0 && max_so_far == 0)
        return 0;
    return max_so_far;
}

int main()
{
    int n;
    cin>>n;
    int arr[n] ;
    for(int i=0;i<n;i++)
       cin>>arr[i];
    cout << "Maximum Sub array product is "
         << maxSubarrayProduct(arr, n);
    return 0;
}
 
