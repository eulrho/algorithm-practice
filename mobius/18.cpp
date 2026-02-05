// 방향에 맞춰 최대로 움직이기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int dy[] = {0, -1, -1, 0, 1, 1, 1, 0, -1};
int dx[] = {0, 0, 1, 1, 1, 0, -1, -1, -1};
int max_cnt = 0;

bool is_valid_pos(int y, int x, int idx, int n) {
	return (y + dy[idx] >= 0 && y + dy[idx] < n && x + dx[idx] >= 0 && x + dx[idx] < n);
}

void move(int n, int board[][10], int dir[][10], int y, int x, int cnt) {
	int idx = dir[y][x];
	bool is_end = true;
	int sample = board[y][x];

	while (is_valid_pos(y, x, idx, n)) {
		int new_y = y + dy[idx], new_x = x + dx[idx];
		if (board[new_y][new_x] > sample)
		{
			is_end = false;
			move(n, board, dir, new_y, new_x, cnt + 1);
		}
		y = new_y;
		x = new_x;
	}
	if (is_end) max_cnt = max(max_cnt, cnt);
}

int main()
{
	fast;
	int n; cin >> n;
	int board[10][10];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	int dir[10][10];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> dir[i][j];
	}
	int y, x; cin >> y >> x;
	move(n, board, dir, y - 1, x - 1, 0);
	cout << max_cnt;
	return (0);
}