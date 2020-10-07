#include<iostream>
using namespace std;
const string A[] = { "", "1 ", "2 ", "3 ", "4 ", "5 ",
				"6 ", "7 ", "8 ", "9 ", "10 " };
const string B[] = { "", "", "2", "3", "4", "5",
				"6", "7", "8", "9" };
string digit(unsigned long long int n, string left)
{
if (n == 0) {
		return "0";
	}
	if (n > 19) {
		return B[n / 10] + A[n % 10] + left;
	}
	else {
		return A[n] + left;
	}
}
string notowords(unsigned long long int n)
{
	string res;
	res = digit((n % 10), "");
	if (n > 100 && n % 100) {
		res = "and " + res;
	}
    res = digit(((n / 10) % 10), "ten ") + res;
	res = digit(((n / 100) % 10), "Hundred ") + res;
	res = digit(((n / 1000) % 100), "Thousand ") + res;
	res = digit(((n / 100000) % 100), "Lakh, ") + res;
	res = digit((n / 10000000) % 100, "Crore, ") + res;
	res = digit((n / 1000000000) % 100, "Billion, ") + res;
	return res;
}
int main()
{
    unsigned long long n;
    cin>>n;
    cout<<notowords(n);

}
