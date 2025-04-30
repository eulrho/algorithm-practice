// 평균 중앙값 문제
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long long a, b;

	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) break ;

		// a -> 중앙값
		long long tmp = a * 2 - b;
		// b -> 중앙값
		tmp = min(tmp, b * 2 - a);
		// c -> 중앙값
		tmp = min((a + b) / 2, tmp);
		cout << tmp << '\n';
	}
	return (0);
}