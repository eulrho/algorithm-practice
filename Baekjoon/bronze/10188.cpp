// Quadrilateral
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	int a, b;

	for (int i=0; i<t; i++) {
		cin >> a >> b;
		for (int j=0; j<b; j++) {
			for (int h=0; h<a; h++) cout << 'X';
			cout << '\n';
		}
		cout << '\n';
	}
	return (0);
}