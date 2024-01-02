// 쉬운 최단거리
#include <iostream>
#include <queue>
#include <cstring>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int board[1001][1001];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int visited[1001][1001];

void bfs(int dest_y, int dest_x, int n, int m) {
	queue<pair<int, int>> q;
	int y, x;

	q.emplace(dest_y, dest_x);
	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		for (int k=0; k<4; k++) {
			if (dy[k]+y < 0 || dy[k]+y > n || dx[k]+x<0 || dx[k]+x > m)
				continue ;
			if (visited[dy[k]+y][dx[k]+x] == -1 && board[dy[k]+y][dx[k]+x] == 1) {
				visited[dy[k]+y][dx[k]+x] = visited[y][x] + 1;
				q.emplace(dy[k]+y, dx[k]+x);
			}
		}
		q.pop();
	}
}

int main()
{
	fast;
	int n, m, y, x;

	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2)
			{
				y = i;
				x = j;
				visited[i][j] = 0;
			}
			else if (board[i][j] == 0)
				visited[i][j] = 0;
			else
				visited[i][j] = -1;
		}
	}
	bfs(y, x, n, m);
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cout << visited[i][j];
			if (j!=m) cout << ' ';
		}
		if (i!=n) cout << '\n';
	}
	return (0);
}