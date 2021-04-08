#include <bits/stdc++.h>
using namespace std;

int a[12], b[12];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int c_a = 0, c_b = 0, all_draw = 0;

    for (int i = 0; i < 10; ++i) cin >> a[i];
    for (int i = 0; i < 10; ++i) cin >> b[i];
    
    for (int i = 0; i < 10; ++i)
    {
        if (a[i] > b[i]) c_a += 3;
        else if (a[i] < b[i]) c_b += 3;
        else
        {
            c_a++;
            c_b++;
        }
    }

    cout << c_a << ' ' << c_b << '\n';

    if (c_a > c_b) cout << 'A' << '\n';
    else if (c_a < c_b) cout << 'B' << '\n';
    else
    {
        for (int i = 9; i >= 0; --i)
        {
            if (a[i] > b[i])
            {
                cout << 'A' << '\n';
                break;
            }
            if (a[i] < b[i])
            {
                cout << 'B' << '\n';
                break;
            }
            else all_draw++;
            if (all_draw == 10)
                cout << 'D' << '\n';
        }
    }
}