// Bank Transfer
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double k; cin >> k;
	cout.precision(2);
	cout << fixed;

	double tmp = k * 0.01 + 25;
	if (tmp < 100.0) tmp = 100.0;
	else if (tmp > 2000.0) tmp = 2000.0;
	cout << tmp;
	return (0);
}