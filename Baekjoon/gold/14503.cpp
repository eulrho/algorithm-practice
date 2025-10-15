// 로봇 청소기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define BACK(n) (n + 2 >= 4 ? n - 2 : n + 2)
#define CURV_DIREC(n) (n - 1 < 0 ? n + 3 : n - 1)

int n, m;
int board[50][50];

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int r, int c, int d) {
	int clean_cnt = 1;
	int visited[50][50] = {0};
	visited[r][c]++;

	int y = r, x = c;
	while (true) {
		bool flag = false;
		for (int i=0; i<4; i++) {
			d = CURV_DIREC(d);
			if (board[y + dy[d]][x + dx[d]] == 0 && visited[y + dy[d]][x + dx[d]] == 0) {
				flag = true;
				y += dy[d];
				x += dx[d];
				clean_cnt++;
				visited[y][x]++;
				break ;
			}
		}
		if (!flag) {
			y += dy[BACK(d)];
			x += dx[BACK(d)];
			if (board[y][x] == 1) break ;
		}
	}
	return clean_cnt;
}

int main()
{
	fast;
	cin >> n >> m;
	int r, c, d; cin >> r >> c >> d;

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cin >> board[i][j];
	}
	cout << dfs(r, c, d);
	return (0);
}