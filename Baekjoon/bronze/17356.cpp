// 욱 제
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double a, b;
	cin >> a >> b;

	cout.precision(4);
	cout << fixed;

	double m = (b - a) / 400.0;
	cout << 1 / (1 + pow(10, m));

	return (0);
}