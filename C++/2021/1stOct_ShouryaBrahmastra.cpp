#include<iostream>
#include<math.h>
using namespace std;


/*Algorithm*/
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
         if (n % i == 0)
         {
              return false;
         }
    }

    return true;
}

void output(int n)
{
    int i, t1 = 0, t2 = 1;
    
    int nextTerm = t1 + t2;
    cout<<"fibonacci series with a twist "<<endl<<t2<<" ";

      for (i = 3; i <= n+1; ++i) 
      {
       if(isPrime(nextTerm)==true || (nextTerm%5==0))
       {
           int tmp = 0;
           cout<<tmp<<" ";
       }
          else
       {
            cout<<nextTerm<<" ";
       }
    
    
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    
      }
}


/*The driver code*/
int main(void)
{
    int n;
    
    cout<<"Enter the number till you want to print fibonacci series:\n";
    cin>>n;
      
    cout<<endl;
    
    /*Function call*/
    output(n);
    
    
  return 0;
}
