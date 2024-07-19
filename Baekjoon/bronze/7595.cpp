// Triangles
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;

	while (true) {
		cin >> n;
		if (n == 0) break ;
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=i; j++)
				cout << '*';
			cout << '\n';
		}
	}
	return (0);
}