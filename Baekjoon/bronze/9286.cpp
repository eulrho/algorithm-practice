// Gradabase
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	for (int i=1; i<=t; i++) {
		int n; cin >> n;
		int m;
		cout << "Case " << i << ":\n";
		for (int j=0; j<n; j++) {
			cin >> m;
			if (m != 6) cout << m + 1 << '\n';
		}
	}
	return (0);
}