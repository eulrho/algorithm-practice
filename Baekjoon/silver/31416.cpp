// 가상 검증 기술
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int q; cin >> q;
	int ta, tb, va, vb;
	for (int i=0; i<q; i++) {
		cin >> ta >> tb >> va >> vb;
		if (ta * va <= tb * vb) cout << tb * vb << '\n';
		else {
			int d_time = 0, s_time = tb * vb;
			for (int j=va; j>=0; j--) {
				if (d_time > s_time) s_time += ta;
				else d_time += ta;
			}
			cout << min(d_time, s_time) << '\n';
		}
	}
	return (0);
}