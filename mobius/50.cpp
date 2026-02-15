// 정수 사각형 최장 증가 수열
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct POS {
	int y, x;

	bool operator<(const POS& other) const {
		if (this->y == other.y) return this->x < other.x;
		return this->y < other.y;
	}
};

int main()
{
	fast;
	int n; cin >> n;
	int board[500][500] = {0};
	vector<pair<int, POS>> pos;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> board[i][j];
			pos.push_back({board[i][j], {i, j}});
		}
	}

	sort(pos.begin(), pos.end());

	int dy[] = {-1, 0, 1, 0};
	int dx[] = {0, 1, 0, -1};

	int arr[500][500], max_cnt = 0, y, x;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) arr[i][j] = 1;
	}
	for (int i=0; i<(int)n*n; i++) {
		y = pos[i].second.y;
		x = pos[i].second.x;
		for (int k=0; k<4; k++) {
			if (y + dy[k] < 0 || y + dy[k] >= n || x + dx[k] < 0 || x + dx[k] >= n)
				continue ;
			if (pos[i].first < board[y + dy[k]][x + dx[k]] && arr[y + dy[k]][x + dx[k]] < arr[y][x] + 1)
				arr[y + dy[k]][x + dx[k]] = arr[y][x] + 1;
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			max_cnt = max(arr[i][j], max_cnt);
	}
	cout << max_cnt;
	return (0);
}