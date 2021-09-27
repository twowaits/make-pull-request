#include <iostream>
using namespace std;
void printBinary(int arr[], int c);
void calcBinary(int n)
{
   int arr[50];
   int c=0;
   while(n>0)
   {
       arr[c] = n % 2;
        n = n/ 2;
        c++;
   }
   printBinary(arr,c);
}

void printBinary(int arr[], int c)
{
    for(int i=c-1;i>=0;i--)
    cout<<arr[i];
    cout<<" ";
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    calcBinary(i);
    return 0;
}
