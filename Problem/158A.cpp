#include <iostream>
using namespace std;

int main()
{
	int n = 0, k = 0, score = 0, count = 0;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	score = arr[k - 1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= score && arr[i] > 0)
			count++;
		else
			break;
	}
	cout << count << endl;
	return 0;
}