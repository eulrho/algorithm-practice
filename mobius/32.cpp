// 네 방향 탈출 가능 여부 판별하기
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void find_path(int n, int m, int board[][101]) {
	int arr[101][101] = {0};
	queue<pair<int, int>> q;
	arr[0][0] = 1;
	q.push({0, 0});
	int y, x;
	int dy[] = {1, 0, -1, 0};
	int dx[] = { 0, 1, 0, -1};

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= m)
				continue ;
			if (arr[y + dy[i]][x + dx[i]] == 0 && board[y + dy[i]][x + dx[i]] == 1) {
				q.push({y + dy[i], x + dx[i]});
				arr[y + dy[i]][x + dx[i]] = 1;
			}
		}
	}
	cout << arr[n-1][m-1];
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int board[101][101];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cin >> board[i][j];
	}
	find_path(n, m, board);
	return (0);
}