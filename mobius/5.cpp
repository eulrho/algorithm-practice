// 삼각형 컨베이어 벨트
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, t; cin >> n >> t;
	int arr[3][n], new_arr[3][n];
	for (int i=0; i<3; i++) {
		for (int j=0; j<n; j++) cin >> arr[i][j];
	}
	t %= (3 * n);
	for (int i=0; i<3; i++) {
		for (int j=0; j<n; j++) {
			if (j + t < n) new_arr[i][j + t] = arr[i][j];
			else
				new_arr[((j + t) / n + i) % 3][(j + t) % n] = arr[i][j];
		}
	}
	for (int i=0; i<3; i++) {
		for (int j=0; j<n; j++) cout << new_arr[i][j] << " ";
		cout << '\n';
	}
	return (0);
}