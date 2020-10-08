#include <iostream>
using namespace std;

int main() {
	int i, j, k, row;
	cin >> row;
	for(i=1; i<row; i++){
	    for(j=i; j<row; j++)
	        cout << " ";
	    
	    for(k=0; k<2*row; k++){
	        if(k == 0||k == 2*i-2)
	            cout << "*";
	        else
	            cout << ' ';
	    }
	    cout << "\n";
	}
	for(i=0; i<row; i++)
	    cout << "* ";
	
	return 0;
}
