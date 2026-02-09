// 마을 구분하기
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int dfs(int n, int board[][30], int visited[][30], int start_y, int start_x) {
	visited[start_y][start_x] = 1;
	stack<pair<int, int>> st;
	st.push({start_y, start_x});

	int y, x, cnt = 1;
	int dy[] = {-1, 0, 1, 0};
	int dx[] = {0, 1, 0, -1};
	while (!st.empty()) {
		y = st.top().first;
		x = st.top().second;

		bool check = false;
		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= n)
				continue ;
			if (board[y + dy[i]][x + dx[i]] == 1 && visited[y + dy[i]][x + dx[i]] == 0) {
				visited[y + dy[i]][x + dx[i]] = 1;
				st.push({y + dy[i], x + dx[i]});
				check = true;
				cnt++;
				break ;
			}
		}
		if (!check) st.pop();
	}
	return cnt;
}

void find_town(int n, int board[][30]) {
	int visited[30][30] = {0};
	vector<int> res;

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (board[i][j] == 1 && visited[i][j] == 0)
			{
				int tmp = dfs(n, board, visited, i, j);
				res.push_back(tmp);
			}
		}
	}
	sort(res.begin(), res.end());
	cout << res.size() << '\n';
	for (int i=0; i<(int)res.size(); i++) cout << res[i] << '\n';
}

int main()
{
	fast;
	int n; cin >> n;
	int board[30][30];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	find_town(n, board);

	return (0);
}