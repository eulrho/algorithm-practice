// 나이트
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct POS {
	int y, x;
};

void find_path(int n, POS start, POS end) {
	int arr[101][101] = {0};
	queue<pair<int, int>> q;
	arr[start.y - 1][start.x - 1] = 1;
	q.push({start.y - 1, start.x - 1});
	int y, x;
	int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
	int dx[] = { 1, 2, 2, 1, -1, -2, -2, -1};

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i=0; i<8; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= n)
				continue ;
			if (arr[y + dy[i]][x + dx[i]] == 0 ) {
				q.push({y + dy[i], x + dx[i]});
				arr[y + dy[i]][x + dx[i]] = arr[y][x] + 1;
			}
		}
	}
	if (arr[end.y-1][end.x-1] == 0) cout << -1;
	else cout << arr[end.y-1][end.x-1] - 1;
}

int main()
{
	fast;
	int n; cin >> n;
	POS start, end;
	cin >> start.y >> start.x >> end.y >> end.x;
	find_path(n, start, end);
	return (0);
}