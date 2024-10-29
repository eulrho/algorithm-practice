// 배
#include <iostream>
#include <algorithm>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int limit[n];
	for (int i=0; i<n; i++) cin >> limit[i];
	sort(limit, limit + n);

	int m; cin >> m;
	vector<pair<int, bool> > weight(m);
	for (int i=0; i<m; i++) {
		cin >> weight[i].first;
		weight[i].second = false;
	}
	sort(weight.begin(), weight.end());
	if (weight.back().first > limit[n-1]) {
		cout << -1;
		return 0;
	}

	int time=0;
	int cnt=m;
	while (cnt > 0) {
		int right = n-1;
		int idx = m-1;
		while (right >= 0 && idx >= 0) {
			while (idx >= 0 && weight[idx].second) idx--;
			if (idx >= 0 && limit[right] >= weight[idx].first) {
				right--;
				weight[idx].second = true;
				cnt--;
			}
			idx--;
		}
		time++;
	}
	cout << time;
	return 0;
}