// 아스키 아트
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long n, m, r, g, b, num;

	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> r >> g >> b;
			num = 2126 * r + 7152 * g + 722 * b;
			if (num < 510000) cout << '#';
			else if (num < 1020000) cout << 'o';
			else if (num < 1530000) cout << '+';
			else if (num < 2040000) cout << "-";
			else cout << '.';
		}
		cout << '\n';
	}
	return (0);
}