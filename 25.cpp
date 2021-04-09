#include <bits/stdc++.h>
using namespace std;

// 완전탐색 문제
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> V(n);
	int arr[100];
	fill(arr, arr + 100, 1);

	for (int i = 0; i < n; ++i)	cin >> V[i];

	for (int i = 0; i < V.size(); ++i)
	{
		for (int j = 0; j < V.size(); ++j)
			if (V[i] < V[j])
				arr[i]++;
	}

	for (int i = 0; i < n; ++i)
		cout << arr[i] << ' ';
}