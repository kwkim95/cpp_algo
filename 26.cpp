#include <bits/stdc++.h>
using namespace std;

int arr[10003];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i)	
		cin >> arr[i];

	for (int i = 0; i < n; ++i)
	{
		int cnt = 0;
		for (int j = 0; j <= i; ++j)
		{
			if (arr[i] <= arr[j])
				cnt++;
		}
		cout << cnt << ' ';
	}
}