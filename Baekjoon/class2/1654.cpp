// 랜선 자르기
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, n;
	long long cnt, mid, max, low, high;
	cin >> k >> n;

	vector<int> lansize(k);
	for (int &l: lansize) {
		cin >> l;
	}

	max = *max_element(lansize.begin(), lansize.begin() + k);
	high = max; mid = high; low = 1;

	while (low <= high) {
		cnt = 0;

		for (int l: lansize) cnt += (l / mid);

		if (cnt >= n) low = mid + 1;
		else high = mid - 1;

		mid = (long long)(low + high) / 2;
	}

	cout << mid;

	return 0;
}