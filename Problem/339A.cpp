#include <iostream>
#include <string>
using namespace std;

int main()
{
	char str[101];
	cin.getline(str, 101);
	int n = (strlen(str) + 1) / 2;
	int* arr = new int[n];
	for (int i = 0, k =0; i < strlen(str); i++)
	{
		if (str[i] == '1' || str[i] == '2' || str[i] == '3')
		{
			int num = stoi(string(1, str[i]));
			arr[k++] = num;
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n - 1; i++)
		cout << arr[i] << "+";
	cout << arr[n - 1] << endl;
	return 0;
}

