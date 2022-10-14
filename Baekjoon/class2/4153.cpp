// 직각삼각형
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int len, max, max_idx, sum;
	bool exit=false;
	vector<int> length;

	while (1) {
		max = 0; sum = 0;
		for (int i = 0; i < 3; i++) {
			cin >> len;
			if (i==2 &&len == 0) exit = true;
			length.push_back(len);
		}

		if (exit) break;

		max_idx = max_element(length.begin(), length.end()) - length.begin();
		for (int i = 0; i < 3; i++) {
			if (i != max_idx) sum += length[i] * length[i];
		}

		if (sum == length[max_idx] * length[max_idx]) cout << "right" << "\n";
		else cout << "wrong" << "\n";

		length.clear();
		vector<int>().swap(length);
	}
	return 0;
}