// 안전 지대
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void dfs(int n, int m, int board[][50], int visited[][50], int start_y, int start_x, int k) {
	visited[start_y][start_x] = 1;
	stack<pair<int, int>> st;
	st.push({start_y, start_x});

	int y, x;
	int dy[] = {-1, 0, 1, 0};
	int dx[] = {0, 1, 0, -1};
	while (!st.empty()) {
		y = st.top().first;
		x = st.top().second;

		bool check = false;
		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= m)
				continue ;
			if (board[y + dy[i]][x + dx[i]] > k && visited[y + dy[i]][x + dx[i]] == 0) {
				visited[y + dy[i]][x + dx[i]] = 1;
				st.push({y + dy[i], x + dx[i]});
				check = true;
				break ;
			}
		}
		if (!check) st.pop();
	}
}

int find_safety_area(int n, int m, int board[][50], int k) {
	int visited[50][50] = {0};
	int res = 0;

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (board[i][j] > k && visited[i][j] == 0)
			{
				dfs(n, m, board, visited, i, j, k);
				res++;
			}
		}
	}
	return res;
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int board[50][50], max_k=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cin >> board[i][j];
			max_k = max(board[i][j], max_k);
		}
	}

	int max_area = 0, res = 1;
	for (int i=max_k; i>=1; i--) {
		int tmp = find_safety_area(n, m, board, i);
		if (tmp >= max_area) {
			res = i;
			max_area = tmp;
		}
	}
	cout << res << " " << max_area;
	return (0);
}