// Shipping
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, x, cnt;
	string str;
	double price, sum;

	cin >> n;
	cout << fixed;
	cout.precision(2);
	for (int i=0; i<n; i++) {
		cin >> x;
		sum = 0.0;
		for (int j=0; j<x; j++) {
			cin >> str >> cnt >> price;
			sum += cnt * price;
		}
		cout << '$' << sum << '\n';
	}
	return (0);
}