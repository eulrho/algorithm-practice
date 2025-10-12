// Age Expression
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int o, a, k; cin >> o >> a >> k;
	for (int i=1; i<=150; i++) {
		if (a * i > o) continue ;
		for (int j=1; j<=150; j++) {
			if (k * j > o) continue ;
			int tmp = a * i + k * j;
			if (tmp == o) {
				cout << 1;
				return 0;
			}
		}
	}
	cout << 0;
	return (0);
}