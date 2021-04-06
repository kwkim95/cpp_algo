#include <iostream>
using namespace std;

int main()
{
	char c[100];
	cin.getline(c, 100);

	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] != ' ')
		{
			if (c[i] >= 65 && c[i] <= 90)
				cout << static_cast<char>(c[i] + 32);
			else
				cout << c[i];
		}
	}
}