#include<iostream>
using namespace std;
const string A[] = { "", "1", "2", "3", "4", "5",
				"6", "7", "8", "9" };

string digit(unsigned long long int n, string left)
{
if (n == 0) {
		return "0";
	}
		return A[n / 10] + A[n % 10] + left;
	
}
string notowords(unsigned long long int n)
{
	string res;
	res = digit((n % 10), "");
	if (n > 100 && n % 100) {
		res = "and " + res;
	}
	if(n>=10)
    res = digit(((n / 10) % 10), " ten ") + res;
    if(n>=100)
	res = digit(((n / 100) % 10), " Hundred ") + res;
	if(n>=1000)
	res = digit(((n / 1000) % 100), " Thousand ") + res;
	if(n>=100000)
	res = digit(((n / 100000) % 100), " Lac, ") + res;
	if(n>=10000000)
	res = digit((n / 10000000) % 100, " Crore, ") + res;
	return res;
}
int main()
{
    unsigned long long n;
    cin>>n;
    cout<<notowords(n);

}
