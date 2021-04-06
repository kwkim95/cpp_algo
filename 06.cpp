#include <iostream>
using namespace std;

int main()
{
	char c[50];
	int sum = 0;
	int cnt = 0;

	cin >> c;

	for (int i = 0; c[i] != '\0'; i++) // 문자열이기때문에 널문자 전까지 반복문실행
	{
		// 0  1  2  3  4  5  6  7  8  9
		// 48 49 50 51 52 53 54 55 56 57
		if (c[i] >= 48 && c[i] <= 57)
		{
			// 0 0 1 2 -> 
			// 0*10 + 0 = 0
			// 0*10 + 0 = 0
			// 0*10 + 1 = 1
			// 1*10 + 2  = 12	
			sum = sum * 10 + (c[i] - 48);
		}
	}
	for (int j = 1; j <= sum; j++)
	{
		if (sum % j == 0)
			cnt++;
	}

	cout << sum << endl;
	cout << cnt << endl;
}
