#include<iostream>
using namespace std;

void calPermutation(string str1, string str2);

int main() {
	string str;
	cin>>str;
    calPermutation(str,"");
    return 0;
}

void calPermutation(string str1, string str2) {
    if (str1 == "") {
        cout << str2 << endl;
    } else {
        for(int i=0; i<str1.length(); i++) {
            string next = str2 + str1[i];
            string remaining = str1.substr(0, i) + str1.substr(i+1);
            calPermutation(remaining, next);
    }
    }
}
