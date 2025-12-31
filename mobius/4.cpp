// 컨베이어 벨트
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, t; cin >> n >> t;
	int arr[2][n], new_arr[2][n];
	for (int i=0; i<2; i++) {
		for (int j=0; j<n; j++) cin >> arr[i][j];
	}
	t %= (2 * n);
	for (int i=0; i<2; i++) {
		for (int j=0; j<n; j++) {
			if (j + t < n) new_arr[i][j + t] = arr[i][j];
			else {
				int tmp1 = (j + t) / n;
				int tmp2 = i;
				for (int k=0; k<tmp1; k++) tmp2 ^= 1;
				new_arr[tmp2][(j + t) % n] = arr[i][j];
			}
		}
	}
	for (int i=0; i<2; i++) {
		for (int j=0; j<n; j++) cout << new_arr[i][j] << " ";
		cout << '\n';
	}
	return (0);
}