// 나무 자르기
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;  
	long long int m, height, high = 0, sum, low = 1, mid, res=0;
	cin >> n >> m;
	vector<long long int> trees;
	for (int i = 0; i < n; i++) {
		cin >> height;
		if (high < height) high = height;
		trees.push_back(height);
	}

	while (low<=high) {
		sum = 0;
		mid = (high+low)/2;
		for (int j = 0; j < n; j++) {
			if (trees[j] > mid) sum += (trees[j] - mid);
		}
		if (sum >= m) {
			if(mid>res) res = mid;
			low = mid + 1;
		}
		else high = mid - 1;
	}

	cout << res;
	return 0;
}