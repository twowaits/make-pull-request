// Contributed by Srijan Singh

#include <iostream>
#include<unordered_map>

using std::unordered_map;
using std::cout;

typedef unordered_map<int,int> Dict;

bool is_prime_special(int num)
{   
    // 1 is not prime
    if (num == 1)
    {
        return false;
    }

    // special
    if (num%5==0)
    {
        return true;
    }

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }

    // is prime
    return true;
}

int fib(int num, Dict my_dict = {})
{
    if (my_dict.find(num) != my_dict.end())
    {
        return my_dict[num];
    }

    if (num<=2)
    {
        return 1;
    }

    my_dict[num] = fib(num-1, my_dict) + fib(num-2, my_dict);

    return my_dict[num];
}

void solution(int num)
{
    int arr[num];

    for(int i=1; i<num+1; i++)
    {
        arr[i-1] = fib(i);
    }

    // modification
    for(int i=0; i<num; i++)
    {
        if (is_prime_special(arr[i]))
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }

    cout<<"\n";
}

int main()
{
    solution(12); // 1 1 0 0 0 8 0 21 34 0 0 144 
    solution(27); // 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418 
    return 0;
}
