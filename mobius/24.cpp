// 크기가 n인 순열
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void find_seq(int n, int idx, int *arr, int *used) {
	if (idx == n) {
		for (int i=0; i<n; i++) cout << arr[i] << " ";
		cout << '\n';
		return ;
	}
	for (int i=1; i<=n; i++) {
		if (used[i] == 0) {
			arr[idx] = i;
			used[i] = 1;
			find_seq(n, idx + 1, arr, used);
			used[i] = 0;
		}
	}
}

int main()
{
	fast;
	int n; cin >> n;
	int used[10] = {0};
	int arr[10] = {0};
	find_seq(n, 0, arr, used);
	return (0);
}