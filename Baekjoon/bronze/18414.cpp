// X に最も近い値 (The Nearest Value)
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int x, l, r; cin >> x >> l >> r;

	int min_diff=100000, tmp=-1;
	for (int i=l; i<=r; i++) {
		if (abs(x - i) < min_diff) {
			min_diff = abs(x - i);
			tmp = i;
		}
	}
	cout << tmp;
	return (0);
}