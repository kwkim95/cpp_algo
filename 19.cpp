#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, ans = 0;
	vector<int> V;
	cin >> n;

	while (n--)
	{
		int num;
		cin >> num;
		V.push_back(num);
	}

	for (int i = 0; i < V.size() - 1; ++i)
	{
		bool flag = true;
		for (int j = i + 1; j < V.size(); ++j)
		{
			if (V[i] <= V[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << V[i] << '\n';
			ans++;
		}
	}
	cout << ans;
}