// 행렬 덧셈
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, num, count=0; cin >> n >> m;
	vector<int> nums;
	for (int i = 0; i < n * m; i++) {
		cin >> num;
		nums.push_back(num);
	}
	for (int i = 0; i < n * m; i++) {
		cin >> num;
		nums[i] += num;
	}
	for (int i = 0; i < n * m; i++) {
		cout << nums[i];
		count++;
		if (count == n) {
			cout << "\n";
			count = 0;
		}
		else cout << " ";

	}

	return 0;
}