// n개 중에 m개 뽑기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void find_num(int n, int m, int *arr, int idx, int start) {
	if (idx == m) {
		for (int i=0; i<m; i++) cout << arr[i] << " ";
		cout << '\n';
		return ;
	}
	for (int i=start; i<=n; i++) {
		arr[idx] = i;
		find_num(n, m, arr, idx + 1, i + 1);
	}
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int arr[20];
	find_num(n, m, arr, 0, 1);
	return (0);
}