#include <iostream>

int main()
{
    int r, c, i, j, k, digits;
    std::cout << "Enter the number of rows followed by the number of columns" << std::endl;
    std::cin >> r >> c;
    int pos[c]; // array to store which row is supposed to print the column number for each column
    for (i = 0; i < c; i++)
    {
        if (i / (r - 1) % 2 == 0) // processes the position for the downward slope
        {
            pos[i] = i % (r - 1);
        }
        else // processes the position for the upward slope
        {
            pos[i] = r - 1 - (i % (r - 1));
        }
    }
    std::cout << "\n-------ZIGZAG PATTERN-------\n\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (pos[j] == i) // if ith row is supposed to print out the column number for jth column, we print it
            {
                std::cout << (j + 1);
            }
            else
            {
                for (k = j + 1; k != 0; k /= 10) // if we're not printing out the column number, we print out the appropriate amount of spaces
                {
                    std::cout << " ";
                }
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }
}