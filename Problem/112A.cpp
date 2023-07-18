#include <iostream>
using namespace std;

int main()
{
	char* str1;
	char* str2;
	char temp[101];
	int cmp = 0;
	cin.getline(temp, 101);
	str1 = new char[strlen(temp) + 1];
	strcpy_s(str1, strlen(temp) + 1, temp);
	cin.getline(temp, 101);
	str2 = new char[strlen(temp) + 1];
	strcpy_s(str2, strlen(temp) + 1, temp);
	for (int i = 0; i < strlen(temp); i++)
	{
		if (abs(int(str1[i]) - int(str2[i])) != 32 && abs(int(str1[i]) - int(str2[i])) != 0)
		{
			if (97 <= int(str1[i]))
				str1[i] = char(int(str1[i]) - 32);
			if (97 <= int(str2[i]))
				str2[i] = char(int(str2[i]) - 32);
			if (int(str1[i]) < int(str2[i]))
			{
				cmp = -1;
				break;
			}
			else
			{
				cmp = 1;
				break;
			}
		}
	}
	cout << cmp << endl;
	return 0;
}

