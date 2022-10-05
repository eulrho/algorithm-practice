// 부녀회장이 될테야
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void residents(int k, int n, vector<int> v) {
	int sum = 0;

	while (k--) {
		for (int i = 0; i < n; i++) {
			sum += v[i];
			v[i] = sum;
		}
		sum = 0;
	}
	cout << v[n - 1] << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	int k, n;
	vector<int> ho(14);
	iota(ho.begin(), ho.end(), 1);

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		residents(k, n, ho);
	}

	return 0;
}