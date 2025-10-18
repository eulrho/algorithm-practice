// 자원 캐기
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int bfs(int n, int m, int arr[][300]) {
	int visited[300][300][2] = {0,};
	queue<pair<int, int>> q;
	visited[0][0][0] = 1;
	q.push({0, 0});

	int dy[2] = {0, 1};
	int dx[2] = {1, 0};
	int y, x;
	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();
		if (arr[y][x] == 1) visited[y][x][1]++;

		for (int i=0; i<2; i++) {
			if (y + dy[i] >= n || x + dx[i] >= m) continue ;
			if (visited[y + dy[i]][x + dx[i]][0] == 0) {
				visited[y + dy[i]][x + dx[i]][0] = 1;
				visited[y + dy[i]][x + dx[i]][1] = visited[y][x][1];
				q.push({y + dy[i], x + dx[i]});
			}
			else if (visited[y + dy[i]][x + dx[i]][1] < visited[y][x][1])
				visited[y + dy[i]][x + dx[i]][1] = visited[y][x][1];
		}
	}
	return visited[n-1][m-1][1];
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int arr[300][300];
	for (int i=0; i<(int)n; i++) {
		for (int j=0; j<(int)m; j++) cin >> arr[i][j];
	}
	cout << bfs(n, m, arr);
	return (0);
}