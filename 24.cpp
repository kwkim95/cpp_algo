#include <bits/stdc++.h>
using namespace std;

int arr[100];
int tmp[100];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	for (int i = 0; i < n - 1; ++i)
		for (int j = i + 1; j <= i + 1; ++j)
			tmp[i] = abs(arr[i] - arr[j]);

	sort(tmp, tmp + n - 1);

	int minus = tmp[0] - tmp[1];
	bool flag = true;
	for (int i = 0; i < n - 2; ++i)
	{
		for (int j = i + 1; j <= i + 1; ++j)
		{
			if (tmp[i] - tmp[j] != minus)
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}