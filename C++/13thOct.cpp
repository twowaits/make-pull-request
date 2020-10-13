#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    int n, i, startRow = 0, endRow, startCol = 0, endCol, counter = 1;
    cout<<"Enter size of Matrix(N)"<<endl<<">> ";
    cin>>n;
    int matrix[n][n];
    endCol = n - 1;
    endRow = n - 1;
    
    while(startRow <= endRow && startCol <= endCol) {
        for (i = startCol; i <= endCol; i++) {
            matrix[startRow][i] = counter;
            counter++;
        }
        startRow++;

        for (i = startRow; i <= endRow; i++) {
            matrix[i][endCol] = counter;
            counter++;
        }
        endCol--;

        if (startRow <= endRow) {
            for (i = endCol; i >= startCol; i--) {
                matrix[endRow][i] = counter;
                counter++;
            }
            endRow--;
        }

        if (startCol <= endCol) {
            for (i = endRow; i >= startRow; i--) {
                matrix[i][startCol] = counter;
                counter++;
            }   
            startCol++;
        }
    }

    for(i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<matrix[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}
