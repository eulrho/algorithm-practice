// Delayed Work
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

double solution(double K, double P, double M, double X) {
	return K * P / M + X * M;
}

int main()
{
	fast;
	double k, p, x; cin >> k >> p >> x;
	double m = 1, tmp, before=-1;
	while (true) {
		tmp = solution(k, p, m, x);
		if (before == -1) before = tmp;
		else {
			if (before >= tmp) before = tmp;
			else break ;
		}
		m += 1;
	}
	cout << fixed;
	cout.precision(3);
	cout << before;
	return (0);
}