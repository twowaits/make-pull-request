/**
 * @file Solution-1.cpp
 * @author Koushik
 * @brief Zigzag problem solution
 * @version 0.1
 * @date 2021-10-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

/*
1                       13 
  2                  12  14
    3              11        15
      4          10             16
        5      9
          6  8
            7
*/

int main()
{
  int row{}, col{};
  int next_down{}, next_up{(row * 2) - 2};

  cin >> row >> col;

  for (int i{}; i < row; ++i)
  {
    for (int j{}; j < col; j++)
    {
      if (i == j || i + next_down == j) // To down 👇
      {
        cout << std::setw(2) << std::left << j + 1 << ' ';
        next_down += (row * 2) - 2;
      }
      else if ((i > 0 && i < row - 1) && next_up - i == j) // To up 👆
      {
        cout << j + 1;
        next_up += (row * 2) - 2;
      }
      else
        cout << "  ";
    }
    cout << endl;
    next_down = 0;
    next_up = (row * 2) - 2;
  }
  return 0;
}