// 0커플
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
	int n, s, idx; cin >> n;
	vector<int>scores;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (find(scores.begin(), scores.end(), (-1) * s) != scores.end()) {
			idx = find(scores.begin(), scores.end(), (-1) * s) - scores.begin();
			scores.erase(scores.begin() + idx);
		}
		else scores.push_back(s);
	}

	if (scores.size() != 0) cout << accumulate(scores.begin(), scores.end(), 0);
	return 0;
}