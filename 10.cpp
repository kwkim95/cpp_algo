#include <iostream>

using namespace std;

int digit_sum(int x)
{
	int temp, sum = 0;

	while (x != 0)
	{
		// 97
		// x temp sum
		// 97 7   7
		// 9  9   16
		// 0 
		temp = x % 10; 
		sum += temp;
		x = x / 10; //c++ ³ª´°¼ÀÀº ³ª¸ÓÁö´Â ¹ö¸² 1/10 == 0ÀÌ µÊ
	}
	return sum;
}
int main()
{
	int n, m, max_sum = -32767, max = -32767;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;
		if (max_sum < digit_sum(m))
		{
			max_sum = digit_sum(m);
			max = m;
		}
		if (max_sum == digit_sum(m))
		{
			if(max < m)
				max = m;
		}
	}
	printf("%d\n", max);
}