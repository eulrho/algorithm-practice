// 2명의 도둑
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct POS {
	int y=0, x=0;
};

int max_total_value = 0;

int find_max_value(int m, int c, int board[], int x) {
	int arr[50][10] = {0};

	for (int i=1; i<=c; i++) {
		for (int j=x; j<x+m; j++) {
			int arr_x = j - x + 1;
			if (board[j] > i)
				arr[i][arr_x] = arr[i][arr_x - 1];
			else
				arr[i][arr_x] = max(arr[i][arr_x - 1], arr[i - board[j]][arr_x - 1] + board[j] * board[j]);
		}
	}
	return arr[c][m];
}

void steal(int n, int m, int c, int board[][20], POS p[2], int depth, int value) {
	if (depth == 2) {
		max_total_value = max(max_total_value, value);
		return ;
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<=n-m; j++) {
			if (depth == 1) {
				if (p[0].y > i || (p[0].y == i && p[0].x + m - 1 >= j))
					continue ;
			}
			p[depth].y = i;
			p[depth].x = j;
			int tmp = find_max_value(m, c, board[p[depth].y], p[depth].x);
			steal(n, m, c, board, p, depth + 1, value + tmp);
		}
	}
}

int main()
{
	fast;
	int n, m, c; cin >> n >> m >> c;
	int board[20][20] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}

	POS p[2];
	steal(n, m, c, board, p, 0, 0);
	cout << max_total_value;
	return (0);
}