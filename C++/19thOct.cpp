#include<iostream>

#define m 5
#define n 5

using namespace std;



bool search(int arr[][n], int target)
{
    int min_ele=arr[0][0];//smallest element of the matrix
    int max_ele=arr[m-1][n-1];//largest element of the matrix

    //if the target is out of range of matrix elements
    if(target<min_ele || target>max_ele)
        return false;

    int i=m-1,j=0;//starting from the bottom-leftmost element of the matrix

    while(i>=0 && j<n)
    {
        //if the current element is greater than target, we move upwards
        if(arr[i][j]>target)
            i--;

        //if the current element is smaller than target, we move forward
        else if(arr[i][j]<target)
            j++;

        //current element is equal to the target
        else
            return true;
    }

    return false;
}

int main()
{
    int target;
    int matrix[m][n]=
    {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    target=1;
    bool ans=search(matrix,target);
    if(ans)
        cout<<target<<":"<<"true"<<endl;
    else
        cout<<target<<":"<<"false"<<endl;

    target=20;
    ans=search(matrix,target);
    if(ans)
        cout<<target<<":"<<"true"<<endl;
    else
        cout<<target<<":"<<"false"<<endl;
}
