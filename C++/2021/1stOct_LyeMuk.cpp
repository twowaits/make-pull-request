#include<iostream>
using namespace std;
bool isPrime(int no){
	if (no == 1 || no==0 ) return false;
	if (no == 2 || no == 3) return true;
	if (no % 2 == 0 || no % 3 == 0 ) return false;
	for (int i= 5; i*i<no; i+=6){
		if (no%i==0 || no%(i+2)==0)
		return false;
	}
	return true;
}
int main()
{
	int NUM=0;
	cin>>NUM;
	int counter=3;
	int fst=1,sec=1;
	int TEMP=0;
	if(NUM==0)return 0;
	else if(NUM == 1){cout<<fst<<" "; return 0;}
	else if(NUM==2){cout<<fst<<" "<<sec<<" "; return 0;}
	cout<<fst<<" "<<sec<<" ";
	while(true){
		TEMP =fst+sec;
		if(counter <= NUM){
			if(!(isPrime(TEMP)) && TEMP%5!=0){cout<<TEMP<<" ";counter++;}
			else{cout<<0<<" ";counter++;}
		}
		else
		break;
		fst=sec;
		sec=TEMP;
	}
	return 0;
}
