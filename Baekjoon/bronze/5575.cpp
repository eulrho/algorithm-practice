// 타임 카드
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int h[3], m[3], s[3], a[3], b[3], tmp;

	for (int i=0; i<3; i++) {
		tmp = 0;
		cin >> a[0] >> a[1] >> a[2];
		cin >> b[0] >> b[1] >> b[2];
		s[i] = b[2] - a[2];
		if (s[i] < 0) {
			tmp = -1;
			s[i] += 60;
		}
		m[i] = tmp + b[1] - a[1];
		if (m[i] < 0) {
			tmp = -1;
			m[i] += 60;
		}
		else tmp = 0;
		h[i] = tmp + b[0] - a[0];
	}
	for (int i=0; i<3; i++)
		cout << h[i] << ' ' << m[i] << ' ' << s[i] << '\n';
	return (0);
}