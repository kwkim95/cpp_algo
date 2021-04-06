#include <bits/stdc++.h>
using namespace std;
#define SIZE 200002

bool p_list[SIZE];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; ++i)
		p_list[i] = 1;

	for (int i = 2; i <= sqrt(n); ++i) {
		if (p_list)
		{
			for (int j = 2 * i; j <= n; j += i)
				p_list[j] = 0;
		}
	}

	for (int i = 1; i <= n; ++i)
		if (p_list[i])
			cnt++;
	cout << cnt;
}