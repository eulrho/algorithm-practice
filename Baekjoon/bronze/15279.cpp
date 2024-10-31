// Heart Rate
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;
	double b, p;

	cin >> n;
	cout.precision(4);
	cout << fixed;
	for (int i=0; i<n; i++) {
		cin >> b >> p;
		cout << (double)60 * (b - 1) / p << ' ';
		cout << (double)60 * b / p << ' ';
		cout << (double)60 * (b + 1) / p << '\n';
	}
	return (0);
}