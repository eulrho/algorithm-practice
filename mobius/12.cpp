// 강력한 폭발
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int max_area = 0;

void case3(int n, vector<vector<int>> &board, int y, int x) {
	int dy[] = {-1, -1, 1, 1};
	int dx[] = {-1, 1, -1, 1};
	for (int i=0; i<4; i++) {
		if (dy[i] + y < 0 || dy[i] + y >= n || dx[i] + x < 0 || dx[i] + x >= n) continue ;
		if (board[dy[i] + y][dx[i] + x] == 0)
			board[dy[i] + y][dx[i] + x] = -1;
	}
}

void case2(int n, vector<vector<int>> &board, int y, int x) {
	int dy[] = {-1, 0, 1, 0};
	int dx[] = {0, 1, 0, -1};
	for (int i=0; i<4; i++) {
		if (dy[i] + y < 0 || dy[i] + y >= n || dx[i] + x < 0 || dx[i] + x >= n) continue ;
		if (board[dy[i] + y][dx[i] + x] == 0)
			board[dy[i] + y][dx[i] + x] = -1;
	}
}

void case1(int n, vector<vector<int>> &board, int y, int x) {
	int dy[] = {1, -1, 2, -2};
	for (int i=0; i<4; i++) {
		if (dy[i] + y < 0 || dy[i] + y >= n) continue ;
		if (board[dy[i] + y][x] == 0)
			board[dy[i] + y][x] = -1;
	}
}

int check_area(int n, vector<vector<int>> &board, int *bomb) {
	vector<vector<int>> cpy_board = vector<vector<int>>(board);
	int seq = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (board[i][j] == 1) {
				if (bomb[seq] == 1) case1(n, cpy_board, i, j);
				else if (bomb[seq] == 2) case2(n, cpy_board, i, j);
				else case3(n, cpy_board, i, j);
				seq++;
			}
		}
	}

	int res = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (cpy_board[i][j] != 0) res++;
		}
	}
	return res;
}

void find_bomb_pos(int n, vector<vector<int>> &board, int bomb_cnt, int *bomb, int size) {
	if (bomb_cnt == size) {
		int tmp = check_area(n, board, bomb);
		max_area = max(max_area, tmp);
		return ;
	}
	for (int i=1; i<=3; i++) {
		bomb[size] = i;
		find_bomb_pos(n, board, bomb_cnt, bomb, size + 1);
	}
}

int main()
{
	fast;
	int n; cin >> n;
	vector<vector<int>> board(21, vector<int>(21));
	int bomb[11], bomb_cnt = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) bomb_cnt++;
		}
	}

	find_bomb_pos(n, board, bomb_cnt, bomb, 0);
	cout << max_area;
	return (0);
}