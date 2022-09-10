// 최소, 최대
// N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, max, min;
	cin >> n;

	vector<int> numbers(n);
	for (int& number: numbers) {
		cin >> number;
	}

	max = *max_element(numbers.begin(), numbers.end());
	min = *min_element(numbers.begin(), numbers.end());

	cout << min << " " << max;

	return 0;
}