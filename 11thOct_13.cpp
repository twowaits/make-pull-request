// Program for printing fibonacci series

#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
void Fibonacci(int N) 
{ int a,b,sum = 2;
     for(int i=0;i<N;i++)
     { 
         if (i==0){                                                // The first two 1's could either be directy printed or by using if else, i have taken the latter approach
         cout<<"1"<<" ";
         b=1;
         }
         else if(i==1){
         cout<<"1"<<" ";
         a=1;
          }
         else{
         sum = a + b;                                                 //The else part is the main logic used in the program
         cout<<sum<<" ";
         b=a;
         a = sum ;
         
         }
     }
} 

int main()
{
 
 int n;
 cout<<"Enter the no. of terms you want in the Fibonacci series"<<"\n";
 cin>>n;
 Fibonacci(n);                                                                  // A void function being called
 return 0;

}
