// Pups
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;
	double d, f, p, res;

	cin >> n;
	cout << fixed;
	cout.precision(2);
	for (int i=0; i<n; i++) {
		cin >> d >> f >> p;
		res = round(d * f * p * 100) / 100;
		cout << '$' << (double)res << '\n';
	}
	return (0);
}