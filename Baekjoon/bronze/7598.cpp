// Bookings
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, tmp;
	string number, deal;

	while (true) {
		cin >> number >> n;
		if (number == "#" && n == 0) break ;
		while (true) {
			cin >> deal >> tmp;
			if (deal == "X" && tmp == 0) break ;
			if (deal == "B") {
				if (tmp + n > 68) continue ;
				n += tmp;
			}
			else {
				if (tmp > n) continue ;
				n -= tmp;
			}
		}
		cout << number << ' ' << n << '\n';
	}
	return (0);
}