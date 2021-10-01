//Author : Rahul Kumar Roy
//Program : Majority Element in the Vector/Array
//CodeFor : HacktoberFest 2021
//Date : 1st October 2021
//Github : mRahulRoy

                    /*---------CODE------------*/
// This program find the majority element in an array or vector
//This alogorithm is called Moore's Voting Algorithm and it is used to find the majority element in an arary.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //initialized an example vector , you can also assign some different values to it
    vector<int> arr = {1,1, 1, 2, 2};
    int inital_Val = arr[0];
    int count = 1;

    //Here the logic Begins
    for (int i = 1; i < arr.size(); i++)
    {
        if (inital_Val == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            inital_Val = arr[i];
            count = 1;
        }
    }
    //At this moment we have our potential Ans but we are not sure that , This is the exact answer
    //So we are traversing the vector to find if it is appearing maximum time in the array or not.
    count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == inital_Val)
        {
            count++;
        }
    }

    //if the count is grater than the halve of the size of the vector
    // Then we have our Answer.
    if (count > arr.size() / 2)
    {
        cout << "Majority Element is : " << inital_Val << endl;
    }
    else
    {
        cout << "No Majority Element Found " << endl;
    }

    return 0;
}
