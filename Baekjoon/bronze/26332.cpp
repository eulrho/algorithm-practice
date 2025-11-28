// Buying in Bulk
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int c, p;
	for (int i=0; i<n; i++) {
		cin >> c >> p;
		cout << c << " " << p << '\n';
		cout << p + (p - 2) * (c - 1) << '\n';
	}
	return (0);
}