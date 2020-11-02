#include <iostream>
#include <string>
#include <queue>
using namespace std;
 
// Function to generate binary numbers between 1 to N using
// queue data structure
void generate(int n)
{
    // create an empty Queue and push 1 to it
    queue<string> q;
    q.push("1");
 
    // run n times
    int i = 1;
    while (i++ <= n)
    {
        // append 0 and 1 to the front element of the queue and
        // enqueue both strings
        q.push(q.front() + "0");
        q.push(q.front() + "1");
 
        // print the front element and dequeue from the queue
        cout << q.front() << ' ';
        q.pop();
    }
}
 
// Generate binary numbers between 1 to N
int main()
{
    int n;
    cin>>n;
    generate(n);
 
    return 0;
}
