#include <iostream>
using namespace std;

int arr[10]; // 0부터 9까지 각 숫자가 얼마나 사용됐는지

int main()
{
	char c[101];
	int res, max = -32767, tmp;

	cin >> c;

	for (int i = 0; c[i] != '\0'; i++)
	{
		tmp = c[i] - 48;
		arr[tmp]++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] >= max)
		{
			max=arr[i];
			res = i;
		}
	}
	printf("%d", res);
}