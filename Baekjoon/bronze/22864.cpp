// 피로도
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c, m, fatigue=0, work=0;

	cin >> a >> b >> c >> m;

	for (int i=0; i<24; i++) {
		if (fatigue + a <= m) {
			work += b;
			fatigue += a;
		}
		else fatigue = max(fatigue - c, 0);
	}
	cout << work;
	return (0);
}