#include <bits/stdc++.h>
using namespace std;

int ana1[52];
int ana2[100];

int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str1, str2;
	bool flag = true;
	cin >> str1 >> str2;

	if (str1.length() != str2.length())
		flag = false;
	else
	{
		for (int i = 0; str1[i] != '\0'; ++i)
		{
			if (str1[i] >= 'a' && str1[i] <= 'z')
				ana1[str1[i] - 'a']++;
			else if (str1[i] >= 'A' && str1[i] <= 'Z')
				ana1[str1[i] - 'A' + 26]++;
			if (str2[i] >= 'a' && str2[i] <= 'z')
				ana2[str2[i] - 'a']++;
			else if (str2[i] >= 'A' && str2[i] <= 'Z')
				ana2[str2[i] - 'A' + 26]++;
		}
	}

	for (int i = 0; i < 52; ++i)
	{
		if (ana1[i] != ana2[i])
		{
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "YES";
	else
		cout << "NO";
}