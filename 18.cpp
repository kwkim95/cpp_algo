#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	while (n--)
	{
		int num, tmp, sum = 0;
		cin >> num >> tmp;

		for (int i = 1; i <= num; ++i)
			sum += i;

		if (sum == tmp)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}