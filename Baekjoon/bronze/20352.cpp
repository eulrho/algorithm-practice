// Circus
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define PI 3.14159265359

int main()
{
	fast;
	double a; cin >> a;
	double r = sqrt(a / PI);
	cout.precision(6);
	cout << fixed;
	cout << 2.0 * PI * r;
	return (0);
}