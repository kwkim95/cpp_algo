#include <iostream>
using namespace std;

int main()
{
	int N, M, MAX=-65536, MIN=65536;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> M;
		if (MAX < M)
			MAX = M;
		else if (MIN > M)
			MIN = M;
	}
	cout << MAX - MIN << endl;
}