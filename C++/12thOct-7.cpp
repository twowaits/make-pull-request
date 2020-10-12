#include <bits/stdc++.h> 
using namespace std;


int main()
{
	int arr[10000],n,size,arr1[10000],ele=0;
	cout <<" Numbers of array you want to sort: ";
	cin>>n;
	
	while(n--)
	{
		cout<<"Enter the size of arrays";
		cin>>size;
		cout<<"Enter the elements of array";
		cout<<"\n";
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		
		for(int j=0;j<=2;j++)
		{
		
		for(int i=0;i<size;i++)
		{
			if(j==arr[i])
			{
				arr1[ele]=arr[i];
				ele++;
				
			}
		}
	}
	cout<< "{";
	for(int i=0;i<size;i++)
	{
		cout<<arr1[i];
		if(i==(size-1))
		{
			cout<<"";
		}
		else
		{
			cout<<", ";
		}
		
	}
	cout<<"}";
	}
	return 0;
	
}

