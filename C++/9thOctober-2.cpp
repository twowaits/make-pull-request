#include <iostream>
using namespace std;

int main()
{
    int i, n1, n2, j, hcf = 1, lcm;
    cout << "\n\n LCM of two numbers:\n";
    cout << "------------------------\n";
    cout << " Input 1st number for LCM: ";
    cin >> n1;
    cout << " Input 2nd number for LCM: ";
    cin >> n2;
    j = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    /* mltiplication of HCF and LCM = the multiplication of these two numbers.*/
    lcm = (n1 * n2) / hcf;
    cout << " The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}
