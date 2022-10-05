// 수 정렬하기 2
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	long long number;
	vector<long long> numbers;

	for (int i = 0; i < n; i++) {
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());

	for (int i = 0; i < n; i++) {
		cout << numbers[i] << "\n";
	}

	return 0;
}