#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, ans = 0, cnt = 0;
	cin >> n >> m;

	while (n--)
	{
		int num;
		cin >> num;
		if (num > m)
		{
			cnt++;
			ans = max(ans, cnt);
		}
		else
			cnt = 0;
	}
	cout << ans;
}