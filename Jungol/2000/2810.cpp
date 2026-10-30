// 타일교체
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int gcd(int a, int b) {
	while (1) {
		int rest = a % b;
		if (rest == 0) return b;
		a = b;
		b = rest;
	}
}

int main()
{
	fast;
	int w, h; cin >> w >> h;
	int tmp = gcd(w, h);
	long long res = (w / tmp) * (h / tmp);
	cout << res;
	return 0;
}