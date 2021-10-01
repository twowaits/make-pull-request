 #include <iostream>
using namespace std;
int main()
{

        int total;
        int number1 = 1;
        int number2 = 1;
        int sum = 0 ;
        bool flag; 
 
        cout<<"enter the number n, till which series will be printed";
        cin>>total;
        



        cout<<number1;


        for(int i=1;i<total;i++){
             flag = true;
            for (int j = 2; j <number2; j++) {
                // condition for nonprime number
                if (number2 % j == 0) {
                    flag = false;
                    break;

                }
            }
            if(number2%5==0 ||  flag== true && number2 !=1)
            {
                cout<<", 0";
            }

            else if (flag==false) {
                cout<<",";
                cout<<number2;
            }

            else {
                cout<<",";
                cout<<number2;
            }


            sum = number1 + number2;
            number1 = number2;
            number2 = sum;
        }
}
