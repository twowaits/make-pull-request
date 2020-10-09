// C++ code to demonstrate star pattern
// Author: Siddharth Shrivastava, GitHub: @Siddharth2430
#include <iostream>
using namespace std;

// Function to demonstrate printing pattern
void hollow_pyra(int n)
{
	// Number of spaces
	int i, j, k = n;

	// Outer loop to handle number of rows
	// n in this case
	for (i = 1; i < n; i++) {

		// Inner loop for columns
		for (j = 1; j <= n; j++) {

			// Condition to print star pattern
			if(j>k && j<n)
                cout<<" ";
			if (j == k || j == n)
				{
                    cout <<"* ";
                }
			else
				cout << " ";
		}
		k--;
		cout << "\n";
	}
	for (i = 1; i <= n; i++)
        cout << "* ";
}

// Driver Code
int main()
{
	int n=0;
	cout<<"Enter Number Of Rows = ";
	cin>>n;
	// Function Call
	hollow_pyra(n);
	return 0;
}
