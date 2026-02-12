// 비를 피하기
#include <iostream>
#include <queue>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_path(int n, int board[][101], int start_y, int start_x) {
	int arr[101][101] = {0};
	queue<pair<int, int>> q;
	arr[start_y][start_x] = 1;
	q.push({start_y, start_x});
	int y, x;
	int dy[] = {1, 0, -1, 0};
	int dx[] = { 0, 1, 0, -1};

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		if (board[y][x] == 3)
			return arr[y][x] - 1;

		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= n)
				continue ;
			if (arr[y + dy[i]][x + dx[i]] == 0 && board[y + dy[i]][x + dx[i]] != 1) {
				q.push({y + dy[i], x + dx[i]});
				arr[y + dy[i]][x + dx[i]] = arr[y][x] + 1;
			}
		}
	}
	return -1;
}

void find_min_time(int n, int board[][101], vector<pair<int, int>>& human) {
	int res[101][101] = {0};
	for (auto h : human)
		res[h.first][h.second] = find_path(n, board, h.first, h.second);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout << res[i][j] << " ";
		}
		cout << '\n';
	}
}

int main()
{
	fast;
	int n, h, m; cin >> n >> h >> m;
	int board[101][101];
	vector<pair<int, int>> human;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2) human.emplace_back(i, j);
		}
	}
	find_min_time(n, board, human);
	return (0);
}