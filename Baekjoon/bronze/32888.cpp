// Consolidating Windows
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long long a, b; cin >> a >> b;
	cout << fixed;
	cout.precision(8);
	cout << sqrt(a * a + b * b);
	return (0);
}