// ACM 호텔
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, h, w, n, resh, resw; cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		resh = n % h; resw = ceil((float)n / h);
		if (resh == 0) resh = h;
		cout << resh * 100 + resw << "\n";
	}

	return 0;
} 