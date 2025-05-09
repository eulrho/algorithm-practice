// 브실이와 친구가 되고 싶어 🤸‍
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, k, x;
	cin >> a >> b >> k >> x;

	int cnt=0;
	for (int i=a; i<=b; i++) {
		if (abs(k - i) <= x) cnt++;
	}
	if (cnt == 0) cout << "IMPOSSIBLE";
	else cout << cnt;
	return (0);
}