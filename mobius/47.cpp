// 정수 사각형 최대 합
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int board[101][101] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int tmp = 0;
			if (i != 0) tmp = board[i - 1][j];
			if (j != 0) tmp = max(tmp, board[i][j - 1]);
			board[i][j] += tmp;
		}
	}
	cout << board[n-1][n-1];
	return (0);
}