// K번 최댓값으로 이동하기
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
	if (p1.first == p2.first) return p1.second < p2.second;
	return p1.first < p2.first;
}

vector<pair<int, int>> find_path(int n, int board[][101], int r, int c, int target) {
	int arr[101][101] = {0};
	vector<pair<int, int>> res;
	queue<pair<int, int>> q;
	arr[r][c] = 1;
	q.push({r, c});
	int y, x;
	int dy[] = {1, 0, -1, 0};
	int dx[] = { 0, 1, 0, -1};

	while (!q.empty()) {
		y = q.front().first;
		x = q.front().second;
		q.pop();

		for (int i=0; i<4; i++) {
			if (y + dy[i] < 0 || y + dy[i] >= n || x + dx[i] < 0 || x + dx[i] >= n)
				continue ;
			if (arr[y + dy[i]][x + dx[i]] == 0 && board[y + dy[i]][x + dx[i]] < board[r][c]) {
				q.push({y + dy[i], x + dx[i]});
				arr[y + dy[i]][x + dx[i]] = 1;
				if (target == board[y + dy[i]][x + dx[i]])
					res.emplace_back(y + dy[i], x + dx[i]);
			}
		}
	}
	return res;
}

int main()
{
	fast;
	int n, k; cin >> n >> k;
	int board[101][101];
	int num[101] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> board[i][j];
			num[board[i][j]] = 1;
		}
	}
	int r, c; cin >> r >> c;
	r--; c--;
	for (int i=0; i<k; i++) {
		bool check = false;
		for (int j=board[r][c]-1; j>=1; j--) {
			if (num[j] == 0) continue ;
			vector<pair<int, int>> pos = find_path(n, board, r, c, j);
			if (pos.empty()) continue ;
			sort(pos.begin(), pos.end(), cmp);
			r = pos[0].first;
			c = pos[0].second;
			check = true;
			break ;
		}
		if (!check) break ;
	}
	cout << r + 1 << " " << c + 1;
	return (0);
}