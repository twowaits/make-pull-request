#include <iostream>
using namespace std;
void func(int n)
{
	int i, j, k = n;
	for (i = 1; i < n+1; i++) {
		for (j = 1; j <2*n; j++) {
			if(i==n || i+j==n+1||j-i==n-1){
                cout<<"*"<<"";}
			else{
				cout << " ";}
		}
		cout << "\n";
	}
}

int main()
{
	int n=0;
	cout<<"Enter Number Of Rows = ";
	cin>>n;
	func(n);
	return 0;
}
