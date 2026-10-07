// 경로찾기(find route)
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define INTMAX 2147483647

struct POS {
	int y = 0, x = 0;
};

enum STATE {
	VALUE, TIME
};

int board[101][101] = {0};
int visited[101][101][2] = {0};
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

bool is_valid_range(int y, int x, int n) {
	return !(y < 0 || y >= n || x < 0 || x >= n);
}

int bfs(int n, int t, POS& start, POS& end) {
	queue<POS> q;
	q.push(start);
	visited[end.y][end.x][VALUE] = INTMAX;
	visited[start.y][start.x][TIME] = 1;

	POS cur;
	while (!q.empty()) {
		cur = q.front();
		q.pop();

		if (visited[cur.y][cur.x][TIME] == t + 1) continue ;

		for (int k=0; k<4; k++) {
			int new_y = cur.y + dy[k], new_x = cur.x + dx[k];
			if (!is_valid_range(new_y, new_x, n) || board[new_y][new_x] == 0) continue ;
			if (board[new_y][new_x] == -2)
				visited[new_y][new_x][VALUE] = min(visited[new_y][new_x][VALUE], visited[cur.y][cur.x][VALUE]);
			else if (!visited[new_y][new_x][TIME]) {
				visited[new_y][new_x][TIME] = visited[cur.y][cur.x][TIME] + 1;
				visited[new_y][new_x][VALUE] = visited[cur.y][cur.x][VALUE] + board[new_y][new_x];
				q.push({new_y, new_x});
			}
			else if (visited[new_y][new_x][VALUE] > visited[cur.y][cur.x][VALUE] + board[new_y][new_x]) {
				visited[new_y][new_x][VALUE] = visited[cur.y][cur.x][VALUE] + board[new_y][new_x];
				visited[new_y][new_x][TIME] = visited[cur.y][cur.x][TIME] + 1;
				q.push({new_y, new_x});
			}
		}

	}
	if (visited[end.y][end.x][VALUE] == INTMAX) return -1;
	return visited[end.y][end.x][VALUE];
}

int main()
{
	fast;
	int n, t; cin >> n >> t;
	POS start, end;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> board[i][j];
			if (board[i][j] == -1) {
				start.y = i; start.x = j;
			}
			else if (board[i][j] == -2) {
				end.y = i; end.x = j;
			}
		}
	}
	cout << bfs(n, t, start, end);
	return (0);
}