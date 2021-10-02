#include <iostream>
#include <cmath>

using namespace std;

long long convertOctalToBinary(int);
int main()
{
    int octalNumber;

    cout << "Enter an octal number: ";
    cin >> octalNumber;

     cout <<"\n [ "<< octalNumber << " ] in octal = [ " << convertOctalToBinary(octalNumber) << " ] in binary\n";

    return 0;
}

long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}
