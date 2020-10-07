#include <iostream>

using namespace std;

int main()
{
	string s;
	int ravi =1;
	cout << "Enter the number: ";
	cin >>s;
	int len = s.size();
	for(int i=0;i<len;i++)
	{
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
		{
			 ravi=2;
			 
		}
		}	
	if(ravi==1)
	{
	switch(len)
	{
		case 1:
			cout<<s;
			return 0;
		case 2:
			cout <<s[0];
			cout <<" ten and ";
			cout <<s[1];
			return 0;
		case 3:
			cout <<s[0];
			cout <<" hundreds ";
			cout << s[1];
			cout <<" ten and ";
			cout <<s[2];
			return 0;
		case 4:
			cout <<s[0];
			cout<< " thousands ";
			cout <<s[1];
			cout<<" hundreds ";
			cout<<s[2];
			cout <<" tens and ";
			cout <<s[3];
			return 0;
		case 5:
			cout<< s[0];
			cout<< s[1];
			cout<< " thousands ";
			cout <<s[2];
			cout<<" hundreds ";
			cout<<s[3];
			cout <<" tens and ";
			cout <<s[4];
			return 0;
		case 6:
			cout<< s[0];
			cout<< " lac ";
			cout<< s[1];
			cout<< s[2];
			cout<< " thousands ";
			cout <<s[3];
			cout<<" hundreds ";
			cout<<s[4];
			cout <<" tens and ";
			cout <<s[5];
			return 0;
		case 7:
			cout<< s[0];
			cout<< s[1];
			cout<< " lacs ";
			cout<< s[2];
			cout<< s[3];
			cout<< " thousands ";
			cout <<s[4];
			cout<<" hundreds ";
			cout<<s[5];
			cout <<" tens and ";
			cout <<s[6];
			return 0;
		case 8:
			cout << s[0];
			cout<< " crores ";
			cout<< s[1];
			cout<< s[2];
			cout<< " lacs ";
			cout<< s[3];
			cout<< s[4];
			cout<< " thousands ";
			cout <<s[5];
			cout<<" hundreds ";
			cout<<s[6];
			cout <<" tens and ";
			cout <<s[7];
			return 0;
		case 9:
			cout<< s[0];
			cout<< s[1];
			cout<< " crores ";
			cout<< s[2];
			cout<< s[3];
			cout<< " lacs ";
			cout<< s[4];
			cout<< s[5];
			cout<< " thousands ";
			cout <<s[6];
			cout<<" hundreds ";
			cout<<s[7];
			cout <<" tens and ";
			cout <<s[8];
			return 0;
			
			
	}
}
else {
	cout<<"Enter the valid number";
}
	return 0;	
}
