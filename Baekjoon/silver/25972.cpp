// 도미노 무너트리기
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, a, l, cnt=0; cin >> n;
	vector<pair<int, int>> domino;

	for (int i=0; i<n; i++) {
		cin >> a >> l;
		domino.emplace_back(a, l);
	}
	sort(domino.begin(), domino.end());

	int j = 0;

	while (j < n) {
		cnt++;
		while (j < n - 1 && domino[j].first + domino[j].second >= domino[j + 1].first) j++;
		j++;
	}
	cout << cnt;
	return (0);
}