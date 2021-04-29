#include <bits/stdc++.h>
using namespace std;

int a[102], b[102], c[102];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, aidx = 0, bidx = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; ++i)
		cin >> b[i];

	for (int i = 0; i < n + m; ++i)
	{
		if (aidx == n) c[i] = b[bidx++];
		else if (bidx == m) c[i] = a[aidx++];
		else if (a[aidx] <= b[bidx]) c[i] = a[aidx++];
		else c[i] = b[bidx++];
	}
	for (int i = 0; i < n + m; ++i)
		cout << c[i] << ' ';
}