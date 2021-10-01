// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int l, b , area;
//     cin>>l>>b;
//     cout<<l<<" "<<b<<endl;
//     cout<<l*b;
//     return 0;
// }



#include <iostream>

using namespace std;
class Rectangle{
    int l , b;
    public:
    void read_input(){
        int w , h;
        cin>>w>>h;
        l = w ;
        b = h ;
    }
    void display(){
        cout<<l*b;
    }
    class RectangleArea{
        

    };


};

class Rectangle{
    public
};



int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}