// 기울어진 직사각형
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_valid_square(int n, int square[][2], int y, int x) {
	for (int i=0; i<4; i++) {
		int new_y = square[i][0] + y;
		int new_x = square[i][1] + x;
		if (new_y < 0 || new_y >= n || new_x < 0 || new_x >= n) return false;
	}
	return true;
}

int calculate_sum(int board[][21], int square[][2], int start_y, int start_x) {
	int sum = 0;
	int y = start_y + square[0][0], x = start_x + square[0][1];
	int y_diff = -1, x_diff = 1;
	while (true) {
		sum += board[y][x];
		y += y_diff;
		x += x_diff;
		if (y == start_y + square[0][0] && x == start_x + square[0][1]) break ;
		else if (y == start_y + square[1][0] && x == start_x + square[1][1]) x_diff = -1;
		else if (y == start_y + square[2][0] && x == start_x + square[2][1]) y_diff = 1;
		else if (y == start_y + square[3][0] && x == start_x + square[3][1]) x_diff = 1;
	}
	return sum;
}

int make_square(int n, int board[][21], int h_diff, int w_diff) {
	int max_sum = 0;
	int square[][2] =
			{{0, 0},
			 {-1 - h_diff, 1 + h_diff},
			 {-2 - h_diff - w_diff, 0 + h_diff - w_diff},
			 {-1 - w_diff, -1 - w_diff}};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!is_valid_square(n, square, i, j)) continue ;
			int tmp = calculate_sum(board, square, i, j);
			max_sum = max_sum < tmp ? tmp : max_sum;
		}
	}
	return max_sum;
}

int find_max_sum(int n, int board[][21]) {
	int max_sum = 0;
	for (int h_diff = 0; h_diff < n - 2; h_diff++) {
		for (int w_diff = 0; w_diff < n - 2; w_diff++) {
			int tmp = make_square(n, board, h_diff, w_diff);
			max_sum = max_sum < tmp ? tmp : max_sum;
		}
	}
	return max_sum;
}

int main()
{
	fast;
	int n; cin >> n;
	int board[21][21];
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	cout << find_max_sum(n, board);
	return (0);
}