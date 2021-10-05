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
            pos[i] = i % (r - 1);
        else 
            pos[i] = r - 1 - (i % (r - 1));
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (pos[j] == i) 
                std::cout << (j + 1);
            else
            {
                for (k = j + 1; k != 0; k /= 10)
                {
                    std::cout << " ";
                }
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }
} 
