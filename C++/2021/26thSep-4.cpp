// Cpp code by Honey Baranwal
 #include <iostream>

using namespace std;

long decimalToBinary(int decimal){
    long binary = 0;
    int multiplier = 1;
    
    while (decimal!=0)
    {
        int reminder = decimal%2;
        decimal /= 2;
        binary += reminder*multiplier;
        multiplier *= 10;
    }
    return binary;
}

int main()
{
    int decimal;
    long binary;
    
   
    cin>>decimal;
    for(int i=1;i<=decimal;i++){
    binary = decimalToBinary(i);
    cout<<binary<<" ";
    }
    
    return 0;
}
