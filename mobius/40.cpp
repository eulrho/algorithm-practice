// k개의 벽 없애기
#include <iostream>
#include <queue>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct POS {
	int y, x;
	int cnt = 0;
};

int find_path(int n, int k, int board[][101], POS start, POS end) {
	int arr[101][101][10] = {0};
	queue<POS> q;
	arr[start.y - 1][start.x - 1][0] = 1;
	q.push({start.y - 1, start.x - 1});
	int y, x, cnt;
	int dy[] = {1, 0, -1, 0};
	int dx[] = { 0, 1, 0, -1};

	while (!q.empty()) {
		y = q.front().y;
		x = q.front().x;
		cnt = q.front().cnt;
		q.pop();

		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= n)
				continue ;
			if (arr[y + dy[i]][x + dx[i]][cnt] == 0 && board[y + dy[i]][x + dx[i]] != 1) {
				q.push({y + dy[i], x + dx[i], cnt});
				arr[y + dy[i]][x + dx[i]][cnt] = arr[y][x][cnt] + 1;
			}
			else if (cnt < k && arr[y + dy[i]][x + dx[i]][cnt + 1] == 0 && board[y + dy[i]][x + dx[i]] == 1) {
				q.push({y + dy[i], x + dx[i], cnt + 1});
				arr[y + dy[i]][x + dx[i]][cnt + 1] = arr[y][x][cnt] + 1;
			}
		}
	}
	int min_cnt = 100000;
	for (int i=0; i<=k; i++) {
		if (arr[end.y - 1][end.x - 1][i] != 0)
			min_cnt = min(min_cnt, arr[end.y - 1][end.x - 1][i] - 1);
	}
	if (min_cnt == 100000) return -1;
	else return min_cnt;
}

int main()
{
	fast;
	int n, k; cin >> n >> k;
	int board[101][101];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	POS start, end;
	cin >> start.y >> start.x >>  end.y >> end.x;
	cout << find_path(n, k, board, start, end);
	return (0);
}