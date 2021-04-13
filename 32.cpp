#include <bits/stdc++.h>
using namespace std;

int arr[102];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, tmp;
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; ++i)
		cout << arr[i] << ' ';
}