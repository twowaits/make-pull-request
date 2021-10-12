#include <bits/stdc++.h>
using namespace std;

int main()
{

	int row, coloumn;
	cin >> row >> coloumn;
	int arr[row][coloumn];
	memset(arr, 0, sizeof(arr));
	int i = 0, j = 0;
	int k = 1;
	bool flag = 1;
	while (j < coloumn)
	{
		arr[i][j] = k++;
		if (flag)
		{
			i++;
		}
		else
		{
			i--;
		}
		if (i == row)
		{
			i = row - 2;
			flag = 0;
		}
		else if (i == -1)
		{
			i = 1;
			flag = 1;
		}
		j++;
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coloumn; j++)
		{
			if (arr[i][j] == 0)
			{
				cout << "  ";
			}
			else
			{
				cout << arr[i][j] << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
