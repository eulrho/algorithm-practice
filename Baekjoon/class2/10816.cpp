// 숫자 카드 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, num, count;
	vector<long long> cards;
	vector<long long> samples;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		cards.push_back(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		samples.push_back(num);
	}
	// {-10, -10, 2, 3, 3, 6, 7, 10, 10, 10}
	sort(cards.begin(), cards.end());
	for (int i = 0; i < m; i++) {
		count = upper_bound(cards.begin(), cards.end(), samples[i]) - lower_bound(cards.begin(), cards.end(), samples[i]);
		cout << count << "\n";
	}

	return 0;
}