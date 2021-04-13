#include <bits/stdc++.h>
using namespace std;

int arr[102];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, max = 101, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[i] < arr[j])
				swap(arr[i], arr[j]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		if (max > arr[i])
		{
			max = arr[i];
			cnt++;
		}
		if (cnt == 3)
		{
			cout << arr[i];
			break;
		}
	}
}