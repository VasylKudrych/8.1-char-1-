#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Include(char* s)
{
	int i = 0,
		pos = 0;
	char* t;

	while (t = strchr(s + pos, '!'))
	{
		pos = t - s + 1;

		if (s[pos] == '!')

			pos = t - s + 2;

		if (s[pos] == '!')
		{
			i++;
			break;
		}
	}
	return i;
}

int main()
{
	char s[51]; //оголошення масив
	cout << "Enter string:" << endl;
	cin.getline(s, 50); // вводяться написані символи в масив
	cout << endl;

	int i = Include(s);
	if (i > 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}
