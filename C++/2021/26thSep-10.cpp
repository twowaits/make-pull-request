//Issue Solved by Meghna Singhal
//Generate Binary Numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int power,ans,rem,num;
    for(int i=1;i<=n;i++){
        num=i;
        power=1;
        ans=0;
        while(num>0){
            rem=num%2;
            ans+=power*rem;
            power*=10;
            num/=2;
        }
        cout<<ans<<" ";
    }
    return 0;
}
