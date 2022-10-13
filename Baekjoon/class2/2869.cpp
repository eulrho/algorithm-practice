// 달팽이는 올라가고 싶다
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a, b, v, count =0, extra; cin >> a >> b >> v;

	if ((a - b) == 1) count = (v-a) / (a - b) + 1;
	else {
		extra = ceil((double)(v - a) / (a - b));
		count = extra + 1;
	}

	cout << count;

	return 0;
}