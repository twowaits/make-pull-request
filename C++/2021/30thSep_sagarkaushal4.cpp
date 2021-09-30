// "Sorting an Array"


#include <bits/stdc++.h>
using namespace std;

void sortArr(int arr[], int n, int minimum, int maximum)
{
	int m=maximum - minimum +1;
	
	vector<int> c(m, 0);
	for (int i=0; i<n; i++)
	c[arr[i] - minimum]++;

	for (int i=0; i<m; i++)
	{
		for (int j=0; j < c[i]; j++)
		{
		    cout << (i + minimum)<<" ";
		}
	}
}


int main()
{
    int t;
    cin>>t;     //for taking number of testcases
    while(t--)
    {
        int ele;
        cin>>ele;       //for taking input of number of elements
        int arr[ele];
        for(int i=0;i<ele;i++)
        {
            cin>>arr[i];
        }
        
        int minimum = 0, maximum = 2;
	    int n = sizeof(arr)/sizeof(arr[0]);
	    sortArr(arr, n, minimum, maximum);
	    cout<<endl;
        
    }
    

	return 0;
}
