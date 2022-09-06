// 최댓값
// 9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int res = 0, order;
	vector<int> numbers(9);

	for (int& number: numbers) {
		cin >> number;
		if (res <= number) res = number;
	}

	if (find(numbers.begin(), numbers.end(), res) != numbers.end()) {
		order = find(numbers.begin(), numbers.end(), res) - numbers.begin() +1;
	}

	cout << res << endl << order;
	return 0;
}