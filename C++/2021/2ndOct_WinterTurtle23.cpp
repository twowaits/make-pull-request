#include <iostream>

using namespace std;
int main()
{
    int row=0,col=0;
    cout<<"Number of rows\n";
    cin>>row;
    cout<<"Number of columns\n";
    cin>>col;
    const int modulus = ((row-1)*2);
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            int modulusCol=(j%modulus);
            if(modulusCol>=row)
            {
                modulusCol-=row;
                modulusCol=((row-1)-(modulusCol+1));
            }
            if(modulusCol==i)
            {
                cout<<j+1;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
