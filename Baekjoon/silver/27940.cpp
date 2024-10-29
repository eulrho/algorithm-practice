// 가지 산사태
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m, k, t, r, sum=0, res=0;

	cin >> n >> m >> k;
	for (int i=1; i<=m; i++) {
		cin >> t >> r;
		if (res != 0) continue ;
		sum += r;
		if (sum > k) res = i;
	}
	if (res != 0)
		cout << res << " 1";
	else cout << -1;
	return 0;
}