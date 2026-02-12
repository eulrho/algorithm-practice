// 돌 잘 치우기
#include <iostream>
#include <queue>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int calculation_cnt(int arr[][101], int n) {
	int res = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (arr[i][j] == 1) res++;
		}
	}
	return res;
}

void find_path(int n, int board[][101], int arr[][101], int r, int c) {
	queue<pair<int, int>> q;
	arr[r][c] = 1;
	q.push({r, c});
	int y, x, cnt;
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

int max_cnt = 0;

void remove_stones(int n, int board[][101], vector<pair<int, int>>& pos, vector<pair<int, int>>& start, int m, int cnt, int first) {
	if (cnt == m) {
		int arr[101][101] = {0};
		for (int i=0; i<(int)start.size(); i++)
			find_path(n, board, arr, start[i].first, start[i].second);
		int tmp = calculation_cnt(arr, n);
		max_cnt = max(max_cnt, tmp);
		return ;
	}
	int size = (int)pos.size();
	for (int i=first; i<size; i++) {
		if (m - cnt + i > size) break ;
		board[pos[i].first][pos[i].second] = 0;
		remove_stones(n, board, pos, start, m, cnt + 1, i + 1);
		board[pos[i].first][pos[i].second] = 1;
	}
}

int main()
{
	fast;
	int n, k, m; cin >> n >> k >> m;
	int board[101][101];
	vector<pair<int, int>> pos;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) pos.emplace_back(i, j);
		}
	}
	int r, c;
	vector<pair<int, int>> start;
	for (int i=0; i<k; i++) {
		cin >> r >> c;
		start.emplace_back(r - 1, c - 1);
	}
	remove_stones(n, board, pos, start, m, 0, 0);
	cout << max_cnt;
	return (0);
}