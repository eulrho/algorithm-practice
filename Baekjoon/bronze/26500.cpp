// Absolutely
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	double a, b;
	cout.precision(1);
	cout << fixed;
	for (int i=0; i<n; i++) {
		cin >> a >> b;

		double tmp = abs(a - b);
		cout << round(tmp * 10) / 10 << '\n';
	}
	return (0);
}