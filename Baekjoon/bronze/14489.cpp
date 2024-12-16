// 치킨 두 마리 (...)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c;

	cin >> a >> b >> c;
	if (a + b >= c * 2) cout << a + b - c * 2;
	else cout << a + b;
	return (0);
}