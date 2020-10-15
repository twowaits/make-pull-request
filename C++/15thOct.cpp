#include<iostream>
#include<unordered_map>

using namespace std;

int gap(int *arr, int n)
{
    unordered_map<int,bool> m;

    int min_ele=arr[0],max_ele=arr[0];

    for(int i=0;i<n;i++)
    {
        m[arr[i]]=true;

        if(arr[i]<min_ele)
            min_ele=arr[i];
        if(arr[i]>max_ele)
            max_ele=arr[i];

    }

    int first=min_ele;
    int second,gap,max_gap=0;

    for(int i=min_ele+1;i<=max_ele;i++)
    {
        if(m.count(i)>0)
        {
            second=i;
            gap=second-first;

            if(gap>max_gap)
                max_gap=gap;

            first=second;
        }
    }

    return max_gap;
}

int main()
{
    int arr[]={9,7,0,2,12,1,17};
    int n=7;

    cout<<gap(arr,n)<<endl;
}
