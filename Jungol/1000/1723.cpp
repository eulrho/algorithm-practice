// 오목
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int board[20][20] = {0};

int dy[] = {0, 1, 1, -1};
int dx[] = {1, 1, 0, 1};

bool is_valid_range(int y, int x) {
	return !(y < 0 || y >= 19 || x < 0 || x >= 19);
}

int check_winner(int y, int x) {
	int target = board[y][x];
	for (int i=0; i<4; i++) {
		if (!is_valid_range(y - dy[i], x - dx[i]) || board[y - dy[i]][x - dx[i]] != target) {
			int cnt = 0;
			int tmp_y = y, tmp_x = x;
			while (1) {
				cnt++;
				if (is_valid_range(tmp_y + dy[i], tmp_x + dx[i])
					&& board[tmp_y + dy[i]][tmp_x + dx[i]] == target) {
					tmp_y += dy[i];
					tmp_x += dx[i];
				}
				else break ;
			}
			if (cnt == 5) return target;
		}
	}
	return 0;
}

void find_winner() {
	for (int i=0; i<19; i++) {
		for (int j=0; j<19; j++) {
			if (board[i][j] != 0) {
				int tmp = check_winner(i, j);
				if (tmp != 0) {
					cout << tmp << '\n' << i + 1 << " " << j + 1;
					return ;
				}
			}
		}
	}
	cout << 0;
}

int main()
{
	fast;
	for (int i=0; i<19; i++) {
		for (int j=0; j<19; j++) cin >> board[i][j];
	}
	find_winner();
	return (0);
}