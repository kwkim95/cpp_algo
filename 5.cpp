#include <iostream>
using namespace std;

int main()
{
	char c[14], sex;
	int year, age;
	for (int i = 0; i < 14; i++)
	{
		cin >> c[i];
	}
	// c[0]�� ������ �ƴ϶� �����̱� ������ * 10�� �ϸ� �ƽ�Ű�ڵ尪�� * 10�� �ȴ�
	// '0' ~ '9' -> 48 ~ 57
	if (c[7] == '1' || c[7] == '2')
	{
		year = 1900 + (c[0] - 48) * 10 + (c[1] - 48);
		if (c[7] == '1')
			sex = 'M';
		else if (c[7] == '2')
			sex = 'W';
	}
	else if (c[7] == '3' || c[7] == '4')
	{
		year = 2000 + (c[0] - 48) * 10 + (c[1] - 48);
		if (c[7] == '3')
			sex = 'M';
		else if (c[7] == '4')
			sex = 'W';
	}
	age = 2019 - year + 1;

	printf("%d %c", age, sex);
}