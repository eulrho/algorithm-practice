// 과민성 대장 증후군
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int total = 0, a, day=0;
	for (int i=0; i<n; i++) {
		cin >> a;
		total = total + a < 0 ? 0 : total + a;
		if (total >= m) day++;
	}
	cout << day;
	return (0);
}