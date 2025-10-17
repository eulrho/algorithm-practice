// 연속합
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; cin >> n;
	int sum=0, number;
	int max_sum = -2000;
	for (int i=0; i<n; i++) {
		cin >> number;
		max_sum = max(number, max_sum);
		if (number < 0) {
			if (sum > 0) {
				max_sum = max(sum, max_sum);
				if (sum + number > 0) sum += number;
				else sum = 0;
			}
		}
		else sum += number;
		if (i == n - 1 && sum > 0) max_sum = max(sum, max_sum);
	}
	cout << max_sum;
	return 0;
}