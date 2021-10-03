#include<iostream>
using namespace std;

void pattern(int rows, int n){
    int number=1, space1=((rows*2)-3)*2+1, sum1=rows+rows-2, sum2=2, space2=2;
 
    for(int i=0;i<rows;i++){
       
        int j;
        for(j=0;j<i;j++){
            cout<<"  ";
        }
        int num=number;
        cout<<num;
        if(num==1){
           
           while(num<=n){
                for(j=0;j<space1;j++)
                    cout<<" ";
                num+=sum1;
                if(num>n) break;
                cout<<num;
          }
        }
         if(number!=1){
           
            while(num<=n){
                   
                    for(j=0;j<space1;j++)
                        cout<<" ";
                    num+=sum1;
                    if(num>n) break;
                    if(sum1>0)
                        cout<<num;
                    
                    for(j=0;j<space2;j++){
                        cout<<" ";
                    }
                    num+=sum2;
                    if(num>n) break;
                    cout<<num;
            }
            
            sum2+=2;
            space2+=4;
            }
            
        sum1-=2;
        space1-=4;
        number++;
        cout<<endl;
        }
    
}

int main(){
    pattern(7,16);
    //rows=7 maximum value=16
    return 0;
}
