#include <iostream>
using namespace std;

int main()
{
	int matrix[5][5];
	int num_o_moves = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
			if (matrix[i][j] == 1)
				num_o_moves = abs(2 - i) + abs(2 - j);
		}
	}
	cout << num_o_moves << endl;
	return 0;
}