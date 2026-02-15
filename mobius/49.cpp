// 정수 사각형 최소 합
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	long long board[101][101] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (i == 0 && j == 0) continue ;
			long long a = -1, b = -1, tmp;
			if (i != 0) a = board[i - 1][j];
			if (j != 0) b = board[i][j - 1];
			if (a != -1 && b != -1) tmp = max(a, b);
			else tmp = max(a, b);
			board[i][j] = min(board[i][j], tmp);
		}
	}
	cout << board[n-1][n-1];
	return (0);
}