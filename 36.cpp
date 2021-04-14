#include <bits/stdc++.h>
using namespace std;

int arr[102];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, temp;
	cin >> n;

	for (int i = 0; i < n; ++i) cin >> arr[i];
	
    for (int i = 0; i < n; ++i) 
    {
        int j = i - 1;
        while ((arr[j] > arr[j + 1]) && (j >= 0)) 
        {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
}