// 알고리즘 수업 - 점근적 표기 1
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a1, a0, c, n0;

	cin >> a1 >> a0 >> c >> n0;

	if (a1 * n0 + a0 <= c * n0 && a1 <= c)
		cout << 1;
	else cout << 0;
	return (0);
}