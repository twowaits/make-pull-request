#include <iostream>
using namespace std;
//Selection Sort Program
void selection_sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index = i;
        for(int j=i; j<=n-1; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index=j;
            }
        }
        
        swap(a[i], a[min_index]);
    }
}

int main() {
    
    int n;
    cin>>n;
    int a[1000];
    int i;
    for( i=0; i<n; i++)
    {
        cin>>a[i];
    }
	
	selection_sort(a, n);
	for(i=0; i<n; i++)
	{
	    cout<<a[i]<<endl;
	}
	return 0;
}
