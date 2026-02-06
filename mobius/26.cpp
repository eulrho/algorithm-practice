// 수들의 합 최대화하기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int max_sum = 0;

void find_max_sum(int n, int board[][10], int y, int *used_x, int sum) {
	if (y == n) {
		max_sum = max(max_sum, sum);
		return ;
	}
	for (int i=0; i<n; i++) {
		if (used_x[i] == 1)
			continue ;
		used_x[i] = 1;
		find_max_sum(n, board, y + 1, used_x, sum + board[y][i]);
		used_x[i] = 0;
	}
}

int main()
{
	fast;
	int n; cin >> n;
	int board[10][10] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}
	int used_x[10] = {0};
	find_max_sum(n, board, 0, used_x, 0);
	cout << max_sum;
	return (0);
}