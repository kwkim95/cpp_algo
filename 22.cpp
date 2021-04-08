#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k, sum = 0, max;
    cin >> n >> k;
    vector<int> V (n);
    for (int i = 0; i < n; ++i) cin >> V[i];

    for (int i = 0; i < k; ++i) sum += V[i];
    max = sum;
    for (int i = k; i < n; ++i)
    {
        sum = sum + V[i] - V[i - k];
        if (sum > max) max = sum;
    }
    cout << max;
}