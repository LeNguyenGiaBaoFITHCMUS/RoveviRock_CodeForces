#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 0;
	int num_o_sol = 0;
	cin >> n;
	int m[3];
	while (n--)
	{
		cin >> m[0] >> m[1] >> m[2];
		if (m[0] == 1)
		{
			if (m[1] == 1 || m[2] == 1)
				num_o_sol++;
		}
		else if (m[0] == 0)
		{
			if(m[1] == 1 && m[2] == 1)
				num_o_sol++;
		}
	}
	cout << num_o_sol << endl;
	return 0;
}
