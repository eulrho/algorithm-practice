// 알고리즘 수업 - 행렬 경로 문제 1
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int cnt1=0, cnt2=0;

int matrix_path_rec(int m[][16], int i, int j) {
	if (i == 0 || j == 0) {
		cnt1++;
		return 0;
	}
	else
		return (m[i][j] + max(matrix_path_rec(m, i-1, j), matrix_path_rec(m, i, j-1)));
}

int code_1_matrix_path(int m[][16], int n) {
	return matrix_path_rec(m, n, n);
}

int code_2_matrix_path(int m[][16], int n) {
	int d[16][16];

	for (int i=0; i<=n; i++)
		d[i][0] = 0;
	for (int j=1; j<=n; j++)
		d[0][j] = 0;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			d[i][j] = m[i][j] + max(d[i - 1][j], d[i][j - 1]);
			cnt2++;
		}
	}
	return d[n][n];
}

int main()
{
	fast;
	int n, m[16][16];

	cin >> n;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) cin >> m[i][j];
	}
	code_1_matrix_path(m, n);
	code_2_matrix_path(m, n);
	cout << cnt1 << ' ' << cnt2;
	return (0);
}