#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		//getline(cin, word);
		cin >> word;
		if (word.length() > 10)
		{
			int len = word.length() - 2;
			word = word[0] + to_string(len) + word[word.length() - 1];
		}
		cout << word << endl;
	}
	return 0;
}
