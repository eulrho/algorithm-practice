// 자연수 n개의 합
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

bool check(long long mid, long long s) {
	return ((1 + mid) * mid / 2 <= s);
}

long long find_sum(long long left, long long right, long long s) {
	long long mid, res = 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (check(mid, s)) {
			left = mid + 1;
			res = max(res, mid);
		}
		else right = mid - 1;
	}
	return res;
}

int main() {
	fast;
	long long s; cin >> s;
	cout << find_sum(1, 1500000000, s);
	return (0);
}