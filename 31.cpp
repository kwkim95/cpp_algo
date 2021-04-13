#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	int sum = 0, tmp = 0;
	cin >> str;

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
			tmp = tmp * 10 + str[i] - '0';
		if (str[i] == 'C' && str[i + 1] == 'H')
			tmp++;
		if (str[i] == 'H')
		{
			sum = tmp * 12;
			tmp = 0;
		}			
		if (str[str.size() - 1] == 'H')	
			sum++;
	}
	sum += tmp;
	cout << sum;
}