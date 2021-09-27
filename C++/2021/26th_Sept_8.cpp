#include <iostream>
using namespace std;

int dec_bin(int x){
    int y=x,ans=0,p=10,i=1;;
    int rem;
    while(y){
        rem=y%2;
        if(y==x){
            i=1;
        }
        else{
            i=10*i;
        }
        ans+=i*rem;
        y=y/2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Please enter number of binary numbers you want : ";
    cin >> num;
    for(int i=1;i<=num;i++){
        int binary_num=dec_bin(i);
        cout << binary_num << ", ";
    }
    return 0;
}
