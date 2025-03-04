// Recovering the Region
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int board[50][50] = {0, };

int main()
{
	fast;
	int n; cin >> n;

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			cin >> board[i][j];
	}
	for (int i=1; i<=n; i++) {
		for (int j=0; j<n; j++)
			cout << i << ' ';
		cout << '\n';
	}

	return 0;
}