#include <iostream>
using namespace std;

int main()
{
	char c[30];

	cin >> c;
	//(������ 1���� )������ 0����
	int cnt = 0;
	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '(')
			cnt++;
		else if (c[i] == ')')
			cnt--;
		if (cnt < 0) // )( ���� ��� �����ϱ�����
			break;
	}
	if (cnt==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}