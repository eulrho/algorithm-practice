// 별 찍기 - 15
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	for (int i=1; i<=n; i++) {
		for (int j=0; j<n-i; j++) cout << " ";
		for (int j=1; j<=i; j++) {
			if (j == 1 || j == i) cout << "* ";
			else cout << "  ";
		}
		cout << '\n';
	}
	return (0);
}