// 갈 수 있는 곳들
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void find_path(int n, int board[][101], int r, int c, int arr[][101]) {

	queue<pair<int, int>> q;
	arr[r][c] = 1;
	q.push({r, c});
	int y, x;
	int dy[] = {1, 0, -1, 0};
	int dx[] = { 0, 1, 0, -1};

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= n)
				continue ;
			if (arr[y + dy[i]][x + dx[i]] == 0 && board[y + dy[i]][x + dx[i]] == 0) {
				q.push({y + dy[i], x + dx[i]});
				arr[y + dy[i]][x + dx[i]] = 1;
			}
		}
	}
}

int main()
{
	fast;
	int n, k; cin >> n >> k;
	int board[101][101];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	int r, c, total = 0;
	int arr[101][101] = {0};
	for (int i=0; i<k; i++) {
		cin >> r >> c;
		find_path(n, board, r - 1, c - 1, arr);
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) if (arr[i][j] == 1) total++;
	}
	cout << total;
	return (0);
}