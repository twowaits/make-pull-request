#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	bool flag= 1;
	for(int i=2; i*i<=n; i++){
		if(n%i==0){
			cout<<"Composite"<<endl;
			flag= 0;
		}
	
	if(flag==1){
		cout<<"Prime"<<endl;
	}
}
	
	return 0;
}
