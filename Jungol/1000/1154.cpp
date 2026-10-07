// 빨강과 검정 (Red and Black)
#include <iostream>
#include <string>
#include <stack>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string board[21];
int dy[] = {0, 1, 0, -1};
int dx[] = {1, 0, -1, 0};

bool is_valid_range(int y, int x, int h, int w) {
	return !(y < 0 || y >= h || x < 0 || x >= w);
}

void dfs(int w, int h, int start_y, int start_x) {
	int visited[21][21] = {0}, cnt = 1;
	stack<pair<int, int>> st;

	visited[start_y][start_x] = 1;
	st.push({start_y, start_x});
	int y, x;
	while (!st.empty()) {
		y = st.top().first;
		x = st.top().second;

		bool flag = false;
		for (int k=0; k<4; k++) {
			int new_y = y + dy[k], new_x = x + dx[k];
			if (is_valid_range(new_y, new_x, h, w) &&
				board[new_y][new_x] == '.' && !visited[new_y][new_x]) {
				flag = true;
				st.push({new_y, new_x});
				cnt++;
				visited[new_y][new_x] = 1;
				break ;
			}
		}
		if (!flag) st.pop();
	}
	cout << cnt;
}

int main()
{
	fast;
	int w, h; cin >> w >> h;
	int y = 0, x = 0;
	for (int i=0; i<h; i++) {
		cin >> board[i];
		for (int j=0; j<w; j++) {
			if (board[i][j] == '@') {
				y = i; x = j;
			}
		}
	}
	dfs(w, h, y, x);
	return (0);
}