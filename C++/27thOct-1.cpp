#include<iostream>

using namespace std;

void printBinaryNos(int n)
{
    int ans[n+1];//array to store the binary equivalent of the decimal indices

    ans[0]=0;

    int rem, num, bin_num;

    for(int dec_num=1;dec_num<=n;dec_num++)
    {
        rem=dec_num%2;
        num=dec_num/2;

        bin_num=ans[num]*10+rem;//generating binary equivalent of dec_num
        cout<<bin_num<<" ";

        ans[dec_num]=bin_num;//storing for future use
    }

    cout<<endl;
}


int main()
{
    int n;

    n=5;
    printBinaryNos(n);

    n=2;
    printBinaryNos(n);
}
