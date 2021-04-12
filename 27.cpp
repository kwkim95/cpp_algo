#include <bits/stdc++.h>
using namespace std;

int arr[1002];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, tmp, j;
	cin >> n;

	for (int i = 2; i <= n; ++i)
	{
		tmp = i; // i를 분해해야하므로 임시변수에 저장
		j = 2;
		while (true)
		{
			if (tmp % j == 0)
			{
				tmp = tmp / j;
				arr[j]++;
			}
			else j++;
			if (tmp == 1)
				break;
		}
	}
	cout << n << "! = ";
	for (int i = 2; i <= n; ++i)
	{
		if (arr[i] != 0)
			cout << arr[i] << ' ';
	}
}