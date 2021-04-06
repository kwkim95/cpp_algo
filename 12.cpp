#include <iostream>
using namespace std;

int main()
{
	// 1자리수 -> 9개
	// 2자리수 -> 90개
	// 3자리수 -> 900개
	// 4자리수 -> 9000개
	// ...

	// ex 1~256라면 1자리수 9개 + 2자리수 2*90 + 3자리수 3*(256-99)

	int n, sum = 0, cnt = 1, de = 9, res = 0;

	//sum 누적되는값
	//cnt 자릿수
	//de 각 자릿수에 포함된 숫자의 갯수
	//res 결과값
	cin >> n;

	while (sum + de < n) //누적되어있는 값과 de의 합이 입력받은 값보다 작을동안
	{
		res = res + (cnt * de); // 결과값에 자릿수와 자릿수에 있는 숫자의 갯수를 곱합
		sum = sum + de; // 누적값에 de 더함
		cnt++; // 자릿수 증가
		de = de * 10; //de*10
	}
	res = res + (n - sum) * cnt;

	printf("%d", res);


}