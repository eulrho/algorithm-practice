// 겹쳐지지 않는 두 직사각형
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct shape {
	int y;
	int x;
	int h;
	int w;
};

bool is_overlap(shape sh1, shape sh2) {
	return !(sh1.x + sh1.w < sh2.x || sh1.y + sh1.h < sh2.y);
}

bool is_valid_square(int n, int m, shape sh) {
	int square[][2] =
			{{0, 0},
			 {0, 1},
			 {1, 1},
			 {1, 0}};
	for (int i=0; i<4; i++) {
		int new_y = square[i][0] * sh.h + sh.y;
		int new_x = square[i][1] * sh.w + sh.x;
		if (new_y < 0 || new_y >= n || new_x < 0 || new_x >= m) return false;
	}
	return true;
}

int calculate_sum(int board[][5], shape sh) {
	int sum = 0;
	for (int i=0; i<=sh.h; i++) {
		for (int j=0; j<=sh.w; j++)
			sum += board[i + sh.y][j + sh.x];
	}
	return sum;
}

int find_another_square(int n, int m, int board[][5], shape sh) {
	int max_sum = -100000;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (sh.y >= i && sh.x >= j) continue ;
			for (int h = 0; h < n; h++) {
				for (int w = 0; w < m; w++) {
					if (h == n - 1 && w == m - 1) break ;
					if (!is_valid_square(n, m, {i, j, h, w})) continue ;
					if (is_overlap(sh, {i, j, h, w})) continue ;
					int tmp = calculate_sum(board, sh) + calculate_sum(board, {i, j, h, w});
					max_sum = max(max_sum, tmp);
				}
			}
		}
	}
	return max_sum;
}

int find_max_sum(int n, int m, int board[][5]) {
	int max_sum = -100000;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int h = 0; h < n; h++) {
				for (int w = 0; w < m; w++) {
					if (h == n - 1 && w == m - 1) break ;
					if (!is_valid_square(n, m, {i, j, h, w})) continue ;
					int tmp = find_another_square(n, m, board, {i, j, h, w});
					max_sum = max(max_sum, tmp);
				}
			}
		}
	}
	return max_sum;
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int board[5][5];
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cin >> board[i][j];
	}
	cout << find_max_sum(n, m, board);
	return (0);
}

/*
 2  2
-9 -5
-6 -9

 -11
 *
 *
 */