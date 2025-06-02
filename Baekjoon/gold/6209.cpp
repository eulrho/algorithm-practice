// 제자리 멀리뛰기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int result;

bool check(vector<int> &info, int n, int m, int mid) {
	int cnt = 0;
	int tmp = 0;
	for (int i=1; i<=n+1; i++) {
		tmp += info[i] - info[i - 1];
		if (tmp >= mid) {
			tmp = 0;
			continue ;
		}
		cnt++;
	}
	return tmp == 0 && cnt <= m;
}

void binary_search(int d, vector<int> &info, int n, int m) {
	int left = 0, right = d, mid;

	while (left <= right) {
		mid = (left + right) / 2;
		if (check(info, n, m, mid)) {
			result = max(result, mid);
			left = mid + 1;
		}
		else right = mid - 1;
	}
}

int main() {
	int d, n, m; cin >> d >> n >> m;

	vector<int> info;
	info.push_back(0);
	info.push_back(d);
	int pos;
	for (int i=1; i<=n; i++) {
		cin >> pos;
		info.push_back(pos);
	}
	sort(info.begin(), info.end());
	result = 0;
	binary_search(d, info, n, m);
	cout << result;
	return 0;
}
