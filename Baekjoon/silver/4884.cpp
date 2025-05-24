// FIFA 월드컵
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
void find_extra_team(long long current_cnt, long long &x, long long &y) {
	if (current_cnt == 1) {
		y = 0;
		return ;
	}

	long long tmp = 1;
	while (true) {
		tmp *= 2;
		x += tmp / 2;
		if (current_cnt == tmp) {
			y = 0;
			return ;
		}
		if (current_cnt < tmp) {
			y = tmp - current_cnt;
			return ;
		}
	}
}

int main()
{
	fast;
	long long g, t, a, d;
	while (true) {
		cin >> g >> t >> a >> d;
		if (g == -1) break ;

		long long x = 0, y = -1;
		find_extra_team(g * a + d, x, y);
		x += (t - 1) * t / 2 * g;
		cout << g << "*" << a << "/" << t << "+" << d << "=" << x << "+" << y << '\n';
	}
	return (0);
}