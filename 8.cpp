#include <iostream>
using namespace std;

int main()
{
	char c[30];

	cin >> c;
	//(만나면 1증가 )만나면 0감소
	int cnt = 0;
	for (int i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == '(')
			cnt++;
		else if (c[i] == ')')
			cnt--;
		if (cnt < 0) // )( 같은 경우 예방하기위해
			break;
	}
	if (cnt==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}