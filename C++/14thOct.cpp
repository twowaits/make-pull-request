#include<iostream>
#include<stdio.h>
#include<vector>
#include<limits>
using namespace std;
    
class Bucket {
public:
    bool b = false;
    int lower = numeric_limits<int>::max();        
    int higher = numeric_limits<int>::min();        
};

int gap(vector<int>& x)
{
    if (x.empty() || x.size() < 2)
        return 0;

    int l = *min_element(x.begin(), x.end()), h = *max_element(x.begin(), x.end());

    int bucket_size = max(1, (h - l) / ((int)x.size() - 1));        
    int bucket_no = (h - l) / bucket_size + 1;                         
    vector<Bucket> buckets(bucket_no);

    for (auto&& xs : x) {
        int bucket_id = (xs - l) / bucket_size;                          
        buckets[bucket_id].b = true;
        buckets[bucket_id].lower = min(xs, buckets[bucket_id].lower);
        buckets[bucket_id].higher = max(xs, buckets[bucket_id].higher);
    }

    int pre = min, maximum = 0;
    for (auto&& bucket : buckets) {
        if (!bucket.b)
            continue;

        maximum = max(maximum, bucket.lower - pre);
        pre = bucket.higher;
    }

    return gap;
}

int main() 
{ 
    int arr[] = { 4, 20, 25 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << gap(arr, n) << endl; 
    return 0; 
} 
