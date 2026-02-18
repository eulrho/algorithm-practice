// 숫자의 개수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;

int lower_bound(int arr[], int n, int num) {
	int left = 0, mid, right = n, res = n;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] >= num) {
			right = mid - 1;
			res = min(res, mid);
		}
		else left = mid + 1;
	}
	if (res == n) return -1;
	else return res;
}

int upper_bound(int arr[], int n, int num) {
	int left = 0, mid, right = n, res = n;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] > num) {
			res = min(mid, res);
			right = mid - 1;
		}
		else left = mid + 1;
	}
	return res;
}

int main() {
	fast;
	int n, m; cin >> n >> m;
	int arr[100001];
	for (int i=0; i<n; i++) cin >> arr[i];
	int num;
	for (int i=0; i<m; i++) {
		cin >> num;
		int pos1 = lower_bound(arr, n, num), pos2 = upper_bound(arr, n, num);
		if (pos1 == -1) cout << "0\n";
		else cout << pos2 - pos1 << '\n';
	}
	return (0);
}
