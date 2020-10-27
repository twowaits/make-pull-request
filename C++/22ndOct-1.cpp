#include<iostream>
#include<string>

using namespace std;

void printPermutation(string str,int start,int end)
{
    //Base case- string to be permuted is of length one
    if(start==end)
    {
       cout<<str<<" ";
       return;
    }

    for(int i=start;i<=end;i++)
    {
        //altering the string
        //fixing the ith index character and swapping it with start index character
        char temp=str[i];
        str[i]=str[start];
        str[start]=temp;

        printPermutation(str,start+1,end);

        //re-altering the string
        temp=str[start];
        str[start]=str[i];
        str[i]=temp;
    }
}

int main()
{
    string input;

    input="abc";
    printPermutation(input,0,input.length()-1);

    cout<<endl;

    input="absg";
    printPermutation(input,0,input.length()-1);

}
