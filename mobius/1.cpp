// 금 채굴하기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct Pos {
	int y, x;
};

int calculate_cost(int k) {
	return k * k + (k + 1) * (k + 1);
}

void set_pos(Pos &pos, Pos start) {
	if (pos.y == start.y && pos.x == start.x) return ;
	if ((pos.y - start.y) < 0 && (pos.x - start.x) >= 0) {
		pos.y++;
		pos.x++;
	}
	else if ((pos.y - start.y) >= 0 && (pos.x - start.x) > 0) {
		pos.y++;
		pos.x--;
	}
	else if ((pos.y - start.y) > 0 && (pos.x - start.x) <= 0) {
		pos.y--;
		pos.x--;
	}
	else {
		pos.y--;
		pos.x++;
	}
}

void count_gold(int n, int &gold, int board[][20], Pos start, int i) {
	Pos pos = {start.y - i, start.x};
	while (true) {
		if (pos.y >= 0 && pos.y < n && pos.x >= 0 && pos.x < n) {
			if (board[pos.y][pos.x] == 1) gold++;
		}
		set_pos(pos, start);
		if (pos.y == start.y - i && pos.x == start.x) break ;
	}
}

int find_max_gold(int n, int m, int board[][20], Pos pos) {
	int gold = 0, max_value = 0;
	for (int i = 0; i <= n; i++) {
		count_gold(n, gold,  board, pos, i);
		if (calculate_cost(i) - gold * m <= 0)
			max_value = max(max_value, gold);
	}
	return max_value;
}

int mine(int n, int m, int board[][20]) {
	int result = 0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			int tmp = find_max_gold(n, m, board, {i, j});
			result = max(result, tmp);
		}
	}
	return result;
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int board[20][20];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	cout << mine(n, m, board);
	return (0);
}