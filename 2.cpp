#include <iostream>
using namespace std;

int main()
{
	int A, B, sum = 0;

	cin >> A >> B;

	for (int i = A; i < B; i++)
	{
		cout << i << '+';
		sum += i;
	}
	sum += B;
	cout << B << '=' << sum << endl;
}