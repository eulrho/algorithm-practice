// Monitor DPI
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double d, r_h, r_v;
	cout << fixed;
	cout.precision(2);
	while (true) {
		cin >> d >> r_h >> r_v;
		if (d == 0 && r_h == 0 && r_v == 0) break ;
		double w = 16.0 * d / sqrt(337);
		double h = 9.0 / 16.0 * w;
		cout << "Horizontal DPI: " << r_h / w << '\n';
		cout << "Vertical DPI: " << r_v / h << '\n';
	}
	return (0);
}