#include <iostream>
#include <string>
using namespace std;

void printPerms(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        output="";
        return;
    }
    for(int i=0;i<input.length();i++)
    {
        string ans=input.substr(0,i)+input.substr(i+1);
        printPerms(ans,output+input[i]);
    }
}

int main() {
    string input,output;
    cin >> input;
    printPerms(input,output);
    return 0;
}