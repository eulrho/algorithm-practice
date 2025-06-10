// Marbles Tell Your Lucky Number
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a[4];
	while (true) {
		int cnt = 0;
		for (int i=0; i<4; i++) {
			cin >> a[i];
			if (a[i] == 0) cnt++;
		}
		if (cnt == 4) break ;

		while (cnt < 3) {
			sort(a, a + 4);
			int tmp = -1;
			for (int i=0; i<4; i++) {
				if (a[i] == 0) continue ;
				if (tmp == -1) tmp = a[i];
				else {
					a[i] -= tmp;
					if (a[i] == 0) cnt++;
				}
			}
		}
		for (int i=0; i<4; i++) {
			if (a[i] != 0) {
				cout << a[i] << '\n';
				break ;
			}
		}
	}
	return (0);
}