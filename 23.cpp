#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num, val = 0 , cnt = 1, ans = 1;
	cin >> n;

	while(n--)
	{
		cin >> num;
		if (num >= val)
		{
			cnt++;
			if (cnt > ans) ans = cnt;
		}
		else cnt = 1;
		val = num;
	}
	cout << ans;
}