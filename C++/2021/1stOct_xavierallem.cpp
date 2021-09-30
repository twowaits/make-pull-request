#include <iostream>

using namespace std;
int main() {

 unsigned long long int k,count=0;
  cin>>k;
  unsigned long long int a[k];
  for( unsigned long long int i=0;i<k;i++){
    cin>>a[i];
  }

  unsigned long long int b[1000]={0};
  for( unsigned long long int i=0;i<k;i++){
        if(a[i]==a[i+1]){
            continue;
        }
        else{
                count++;
    for( unsigned long long int j=0;j<a[i];j++){
            b[j]=count;

    }
        }
  }

 /* for( unsigned long long int i=0;i<a[0];i++){
    cout<<b[i];
  }
  cout<<endl;
  //second phase*/

  unsigned long long int l;
  cin>>l;
  unsigned long long int c[l];
  for( unsigned long long int i=0;i<l;i++){
    cin>>c[i];

    count=b[c[i]];
    for( unsigned long long int j=c[i];j>=0;j--){
        if(b[j]==b[j-1]||b[j]==0){
            b[j]=count+1;
        }
        else{
                b[j]=count+1;
            break;
        }
    }
    }

 /*   for( unsigned long long int i=0;i<a[0];i++){
    cout<<b[i];
  }
cout<<endl;*/
for( unsigned long long int i=0;i<l;i++){
    cout<<b[c[i]]<<endl;
  }




    return 0;
}
