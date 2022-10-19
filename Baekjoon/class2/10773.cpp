// 제로
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int k; cin >> k;
	long long num;
	vector<long long> sum;

	for (int i = 0; i < k; i++) {
		cin >> num;
		
		if (num == 0 && sum.size() != 0) {
			sum.pop_back();
		}
		else
			sum.push_back(num);
	}

	cout << accumulate(sum.begin(), sum.end(), 0);

	return 0;
} 