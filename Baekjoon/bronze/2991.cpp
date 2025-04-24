// 사나운 개
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c, d, t;
	cin >> a >> b >> c >> d;

	for (int i=0; i<3; i++) {
		cin >> t;
		int tmp = t % (a + b), result=0;
		if (tmp > 0 && tmp <= a) result++;
		tmp = t % (c + d);
		if (tmp > 0 && tmp <= c) result++;
		cout << result << '\n';
	}

	return (0);
}