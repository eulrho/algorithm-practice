// 영화감독 숌
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, title=0, tmp, cnt=0;
	cin >> n;

	while (cnt != n) {
		title++;
		tmp = title;

		while (tmp != 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else tmp /= 10;
		}
	}

	cout << title;

	return 0;
}