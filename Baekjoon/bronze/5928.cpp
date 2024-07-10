// Contest Timing
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
    fast;
	int a, b, c, time=0, tmp=0;

	cin >> a >> b >> c;
	if (a == 11 && (b < 11 || (b == 11 && c < 11))) {
		cout << -1;
		return (0);
	}
	if (c - 11 < 0) {
		time += 60 + c - 11;
		tmp = -1;
	}
	else time += c - 11;
	if (b - 11 + tmp < 0) {
		time += (b - 11 + tmp + 24) * 60;
		tmp = -1;
	}
	else time += (b - 11 + tmp) * 60;
	time += (a - 11 + tmp) * 24 * 60;
	cout << time;
    return (0);
}