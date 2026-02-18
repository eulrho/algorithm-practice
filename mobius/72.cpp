// 숫자 빠르게 찾기
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int find_pos(int arr[], int n, int num) {
	int left = 0, mid, right = n;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] == num) return mid + 1;
		if (arr[mid] < num) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main() {
	fast;
	int n, m; cin >> n >> m;
	int arr[100001];
	for (int i=0; i<n; i++) cin >> arr[i];
	sort(arr, arr+n);
	int num;
	for (int i=0; i<m; i++) {
		cin >> num;
		cout << find_pos(arr, n, num) << '\n';
	}
	return (0);
}