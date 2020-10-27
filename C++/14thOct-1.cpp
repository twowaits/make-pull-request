#include<iostream>
#include<iterator> // for std::size
using namespace std;
int main()
{
    int a[]{1,7,0,9,12,50,100};	/*	{9, 7, 0, 2, 12, 1, 17};   */
    int i,j,temp,diff[10];
    
   const int size{sizeof(a)/sizeof(a[0])};
    
    for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	    }
	}
 	for(i=0;i<=size;i++)
	{
		cout<<"\t"<<a[i];
	}
	
	cout<<"\n";
	
	/* Difference */
	for(i=0;i<size;i++)
	{
		diff[i]=a[i+1]-a[i];		
	}
	
	/* optional difference display
	for(i=0;i<size;i++)
	{
		cout<<"\t"<<diff[i];
	}
	cout<<"\n";
	
	/* Maximum */
	
	for(i=0;i<size;i++)
	{
		if(diff[0]<diff[i])
		{
			diff[0]=diff[i];
		}
	}
	cout<<diff[0];
}