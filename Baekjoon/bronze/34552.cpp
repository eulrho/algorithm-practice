// 디딤돌 장학금
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int m[11];
	for (int i=0; i<11; i++) cin >> m[i];
	int n; cin >> n;
	int b, s, sum = 0;
	double l;
	for (int i=0; i<n; i++) {
		cin >> b >> l >> s;
		if (l >= 2.0 && s >= 17) sum += m[b];
	}
	cout << sum;
	return (0);
}