// Code contributed by Varsha Gupta
#include <iostream>
using namespace std;

#define MAX 100

int main()
{
	//array declaration
	int arr[MAX];
	int n,i,j;
	int temp;
	
	//read total number of elements to read
	cout<<"Enter total number of elements to read: ";
	cin>>n;
	
	//check bound
	if(n<0 || n>MAX)
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	
	//read n elements
	for(i=0;i<n;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>arr[i];
	}
	
	//print input elements
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	//sorting - ASCENDING ORDER
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//print sorted array elements
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<" , ";
	cout<<endl;	
	
	
	return 0;
	
}
