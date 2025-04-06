// Pokemon Buddy
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;

	int g, c, e;
	for (int i=0; i<t; i++) {
		cin >> g >> c >> e;
		if (c >= e) {
			cout << "0\n";
			continue ;
		}
		cout << (1 + 2 * (g - 1)) * (e - c) << '\n';
	}
	return (0);
}