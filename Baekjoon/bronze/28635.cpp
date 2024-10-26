// Индикатор
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int m, a, b, cnt=0;

	cin >> m >> a >> b;
	while (a != b) {
		cnt++;
		a++;
		if (a > m) a = 1;
	}
	cout << cnt;
	return (0);
}