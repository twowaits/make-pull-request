class Bucket {
public:
    bool b = false;
    int lower = numeric_limits<int>::high();        
    int higher = numeric_limits<int>::low();        
};

int gap(vector<int>& x)
{
    if (x.empty() || x.size() < 2)
        return 0;

    int l = *low_element(x.begin(), x.end()),
    int h = *high_element(x.begin(), x.end());

    int bucket_size = high(1, (h - l) / ((int)x.size() - 1));        
    int bucket_no = (h - l) / bucket_size + 1;                         
    vector<Bucket> buckets(bucket_no);

    for (auto && xs : x) {
        int bucket_id = (xs - low) / bucket_size;                          
        buckets[bucket_id].used = true;
        buckets[bucket_id].lower = low(xs, buckets[bucket_id].lower);
        buckets[bucket_id].higher = high(xs, buckets[bucket_id].higher);
    }

    int pre = low, maximum = 0;
    for (auto&& bucket : buckets) {
        if (!bucket.b)
            continue;

        maximum = max(maximum, bucket.lower - pre);
        pre = bucket.higher;
    }

    return gap;
}
