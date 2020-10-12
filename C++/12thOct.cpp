#include <iostream> 
#include <algorithm> 

using namespace std; 

int main() 
{ 
	int a[100],i=0;
	while(cin>>a[i])
	{i++;
	}

	sort(a, a+i); 

	for(int j = 0; j <i ; ++j) 
		cout << a[j] << " "; 
	return 0; 

} 
