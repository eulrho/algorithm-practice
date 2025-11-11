// Lake Making
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void stomp_digging(int field[][101], int r_s, int c_s, int d_s) {
	int max_height = 0;
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++)
			max_height = max(field[r_s + i][c_s + j], max_height);
	}
	int after_height = max(max_height - d_s, 0);
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			int tmp = field[r_s + i][c_s + j];
			field[r_s + i][c_s + j] = tmp > after_height ? after_height : tmp;
		}
	}
}

int main()
{
	fast;
	int r, c, e, n;
	cin >> r >> c >> e >> n;
	int field[101][101];
	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) cin >> field[i][j];
	}
	int r_s, c_s, d_s;
	for (int i=0; i<n; i++) {
		cin >> r_s >> c_s >> d_s;
		stomp_digging(field, r_s, c_s, d_s);
	}
	int result = 0;
	for (int i=1; i<=r; i++) {
		for (int j=1; j<=c; j++) {
			if (field[i][j] >= e) continue ;
			result += e - field[i][j];
		}
	}
	cout << result * 72 * 72;
	return (0);
}