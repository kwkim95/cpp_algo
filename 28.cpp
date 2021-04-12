#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, tmp, j, cnt1, cnt2;
	cin >> n;

	for (int i = 2; i <= n; ++i)
	{
		tmp = i; 
		j = 2;
		while (true)
		{
			if (tmp % j == 0)
			{
				if (j == 2) cnt1++;
				else if (j == 5) cnt2++;
				tmp = tmp / j;
				
			}
			else j++;
			if (tmp == 1)
				break;
		}
	}

	if (cnt1 > cnt2) cout << cnt2;
	else cout << cnt1;
}