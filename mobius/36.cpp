// 빙하
#include <iostream>
#include <vector>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

vector<pair<int, int>> bfs(int n, int m, int board[][300]) {
	int arr[200][300] = {0};
	queue<pair<int, int>> q;
	vector<pair<int, int>> res;
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
			if (arr[y + dy[i]][x + dx[i]] == 0) {
				if (board[y + dy[i]][x + dx[i]] == 0)
					q.push({y + dy[i], x + dx[i]});
				else res.emplace_back(y + dy[i], x + dx[i]);
				arr[y + dy[i]][x + dx[i]] = 1;
			}
		}
	}
	return res;
}

void melt(int n, int m, int board[][300]) {
	int time = 0, last_size=0;

	while (true) {
		vector<pair<int, int>> pos = bfs(n, m, board);
		if (pos.empty()) {
			cout << time << " " << last_size;
			return ;
		}
		last_size = (int)pos.size();
		for (auto p : pos) board[p.first][p.second] = 0;
		time++;
	}
}
int main()
{
	fast;
	int n, m; cin >> n >> m;
	int board[200][300];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cin >> board[i][j];
	}
	melt(n, m, board);
	return (0);
}