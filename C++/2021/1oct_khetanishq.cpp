// To find Traling 0 in factorial
//Input=2
//Output=0
//Input=5
//Output=1




#include<bits/stdc++.h> 
using namespace std;
class Solution
{
public:
    int trailingZeroes(int N)
    {
        // Write Your Code here
        int m=0;
        while(N>0){
        m= m+N/5;
        N=N/5;}
        return m;
    }
};

// Driver Code Starts.
int main()
{
    int t;
    cout<< "Enter 1 to continue"
    Cout<< "0 to End";
    cin >> t;
    while (t--)
    {
        int N;
        cout<< "enter no  ";
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
//Driver Code Starts.
