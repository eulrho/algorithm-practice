// xor 결과 최대 만들기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int max_value = 0;

void find_max_value(int n, int m, int *arr, int start, int cnt, int res) {
	if (m == cnt) {
		max_value = max(max_value, res);
		return ;
	}
	for (int i=start; i<n; i++) {
		int tmp;
		if (start == 0) tmp = arr[i];
		else tmp = res ^ arr[i];
		find_max_value(n, m, arr, i + 1, cnt + 1, tmp);
	}
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int arr[20];
	for (int i=0; i<n; i++) cin >> arr[i];
	find_max_value(n, m, arr, 0, 0, 0);
	cout << max_value;
	return (0);
}