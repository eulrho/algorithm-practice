// 가중치가 동일한 그래프에서의 BFS
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
			if (board[y + dy[i]][x + dx[i]] == 1) {
				if (arr[y + dy[i]][x + dx[i]] == 0 ) {
					q.push({y + dy[i], x + dx[i]});
					arr[y + dy[i]][x + dx[i]] = arr[y][x] + 1;
				}
			}
		}
	}
	if (arr[n-1][m-1] == 0) cout << -1;
	else cout << arr[n-1][m-1] - 1;
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