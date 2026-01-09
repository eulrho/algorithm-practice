// 부재중 전화
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, l, d;
	cin >> n >> l >> d;

	int time, ring = 0;
	for (int i = 1; i <= n; i++) {
		time = i * l + 5 * (i - 1);
		while (time > ring) ring += d;
		if (ring < time + 5 || i == n) {
			cout << ring;
			break ;
		}
	}
	return (0);
}