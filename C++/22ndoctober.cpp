#include <bits/stdc++.h>
#include <string.h>
using namespace std;
void permutation(string s, int a, int b)  
{  
    if(a == b){
      cout<<s<<endl;
    }
    
    else{  
        for (int i = a; i <= b; i++)  
        {  
            swap(s[a], s[i]);  
            
            permutation(s, a+1, b);  
  
            swap(s[a], s[i]);  
        }  
    }  
}  
int main() {
    
	string str;
	cin>>str;
	int n = str.length();
	permutation(str,0,n-1);
	return 0;
}

