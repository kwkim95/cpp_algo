#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, tmp, digit, cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		tmp = i; // i�� �ӽú��� tmp�� ����
		while (tmp > 0) // tmp�� 0�� �ƴҶ�����
		{
			digit = tmp % 10; // digit�� tmp % 10�� ����
			if (digit == 3) cnt++; // digit�� 3�̶�� ++
			tmp = tmp / 10; // tmp�� 10���� ����
		}
	}
	cout << cnt;
}