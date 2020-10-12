#include <iostream> 
#include <algorithm> 

using namespace std; 

int main() 
{ 
	int a[100],n=0;
	while(cin>>a[n])
	{n++;
	}
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            zero++;
        if (a[i] == 1)
            one++;
        if (a[i] == 2)
            two++;
    }
    for (int i = 0; i < zero; i++) 
        a[i] = 0;
    for (int i = zero; i < (zero + one); i++) 
        a[i] = 1;
     for (int i = (zero + one); i < n; i++) 
        a[i] = 2;

	for(int j = 0; j <n ; ++j) 
		cout << a[j] << " "; 
	return 0; 

} 
