#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num, p_c = 0, m_c = 0;
	cin >> n;
	vector<int>p, m;
	for (int i = 0; i < n; ++i)
	{
		cin >> num;
		if (num > 0)
			p.push_back(num);
		else
			m.push_back(num);
	}

	for (int i = 0; i < m.size(); ++i)
		cout << m[i] << ' ';
	for (int i = 0; i < p.size(); ++i)
		cout << p[i] << ' ';
}