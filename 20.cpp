#include <bits/stdc++.h>
using namespace std;

int a[102], b[102];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            if (b[i] == 1) cout << 'D' << '\n';
            else if (b[i] == 2) cout << 'B' << '\n';
            else cout << 'A' << '\n';
        }
        else if (a[i] == 2)
        {
            if (b[i] == 1) cout << 'A' << '\n';
            else if (b[i] == 2) cout << 'D' << '\n';
            else cout << 'B' << '\n';
        }
        else
        {
            if (b[i] == 1) cout << 'B' << '\n';
            else if (b[i] == 2) cout << 'A' << '\n';
            else cout << 'D' << '\n';
        }
    }
}