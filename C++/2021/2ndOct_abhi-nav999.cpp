#include <bits/stdc++.h>
using namespace std;


int main() {
    int row, col;
    cin >> row >> col;
    
    for (int i = 0; i < row; i++) {
        int no = i + 1;
        for (int blanks = 0; blanks < i; blanks++) {
            cout << " ";
        }
        cout << i+1;
        int alt = 1;

        while(1) {
            int spaces;
            if (i == 0 || i == row - 1) {
                spaces = 2 * (row - 1);
            }
            else {
                if (alt) {
                    spaces = 2 * (row - i - 1) - 1;
                }
                else {
                    spaces = 2 * i - 1;
                }
            }
            
            for (int j = 0; j < spaces; j++) {
                cout << " ";
            }
            
            if (i == 0 || i == row - 1) spaces--;
            
            no += spaces + 1;
            if (no > col) break;
            
            alt = alt ^ 1;
            cout << no;
        }
        cout << endl;
    }
}
