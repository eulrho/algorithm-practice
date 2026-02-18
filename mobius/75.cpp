// 정수 분배하기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

bool check(int mid, int arr[], int n, int m) {
	int cnt = 0;
	for (int i=0; i<n; i++)
		cnt += arr[i] / mid;
	return cnt >= m;
}

int find_max_k(int arr[], int n, int m, int left, int right) {
	int mid, res = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (check(mid, arr, n, m)) {
			left = mid + 1;
			res = max(res, mid);
		}
		else right = mid - 1;
	}
	return res;
}

int main() {
	fast;
	int n, m; cin >> n >> m;
	int arr[10001], max_num = 0;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		max_num = max(arr[i], max_num);
	}
	cout << find_max_k(arr, n, m, 1, max_num);
	return (0);
}