// 카우버거
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int b, c, d;
	cin >> b >> c >> d;

	int burger[b], side[c], drink[d];
	for (int i=0; i<b; i++) cin >> burger[i];
	for (int i=0; i<c; i++) cin >> side[i];
	for (int i=0; i<d; i++) cin >> drink[i];

	sort(burger, burger + b);
	sort(side, side + c);
	sort(drink, drink + d);

	int origin = 0, discount = 0;
	int b_idx = b - 1, s_idx = c - 1, d_idx = d - 1;
	int min_idx = min(b_idx, min(s_idx, d_idx));
	for (int i=0; i<=min_idx; i++) {
		int tmp = burger[b_idx--] + side[s_idx--] + drink[d_idx--];
		origin += tmp;
		discount += tmp * 0.9;
	}
	while (b_idx >= 0) {
		origin += burger[b_idx];
		discount += burger[b_idx--];
	}
	while (s_idx >= 0) {
		origin += side[s_idx];
		discount += side[s_idx--];
	}
	while (d_idx >= 0) {
		origin += drink[d_idx];
		discount += drink[d_idx--];
	}

	cout << origin << '\n' << discount;
	return (0);
}