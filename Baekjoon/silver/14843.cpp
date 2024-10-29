// 정보갓 영훈이
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, p;
	double s, a, t, m, r, sum=0;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> s >> a >> t >> m;
		sum += s * (1.0 + 1.0 / a) * (1 + m / t) / 4.0;
	}

	int cnt=0;
	cin >> p;
	for (int i=0; i<p; i++) {
		cin >> r;
		if (r > sum) cnt++;
	}

	cout.precision(2);
	cout << fixed;
	if ((double)(cnt + 1) / (p + 1) * 100 <= 15)
		cout << "The total score of Younghoon \"The God\" is " << sum << '.';
	else cout << "The total score of Younghoon is " << sum << '.';
	return 0;
}
