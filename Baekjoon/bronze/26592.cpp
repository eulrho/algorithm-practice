// Triangle Height
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	double a, b;
	cout.precision(2);
	cout << fixed;
	for (int i=0; i<t; i++) {
		cin >> a >> b;
		cout << "The height of the triangle is " << 2 * a / b << " units\n";
	}
	return (0);
}