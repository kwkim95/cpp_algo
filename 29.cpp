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
		tmp = i; // i를 임시변수 tmp에 저장
		while (tmp > 0) // tmp가 0이 아닐때까지
		{
			digit = tmp % 10; // digit에 tmp % 10값 저장
			if (digit == 3) cnt++; // digit이 3이라면 ++
			tmp = tmp / 10; // tmp를 10으로 나눔
		}
	}
	cout << cnt;
}