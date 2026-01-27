// 기울어진 직사각형의 회전
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
int n;
struct INFO {
	int r, c;
	int m[4];
	int dir;
};

int up_left(vector<vector<int>> &board, int y, int x, int m, int tmp) {
	int res = board[y - m][x - m];
	for (int i = m; i > 1; i--)
		board[y - i][x - i] = board[y - i + 1][x - i + 1];
	board[y - 1][x - 1] = tmp;
	return res;
}

int down_left(vector<vector<int>> &board, int y, int x, int m, int tmp) {
	int res = board[y + m][x - m];
	for (int i = m; i > 1; i--)
		board[y + i][x - i] = board[y + i - 1][x - i + 1];
	board[y + 1][x - 1] = tmp;
	return res;
}

int up_right(vector<vector<int>> &board, int y, int x, int m, int tmp) {
	int res = board[y - m][x + m];
	for (int i = m; i > 1; i--)
		board[y - i][x + i] = board[y - i + 1][x + i - 1];
	board[y - 1][x + 1] = tmp;
	return res;
}

int down_right(vector<vector<int>> &board, int y, int x, int m, int tmp) {
	int res = board[y + m][x + m];
	for (int i = m; i > 1; i--)
		board[y + i][x + i] = board[y + i - 1][x + i - 1];
	board[y + 1][x + 1] = tmp;
	return res;
}

// 시계
void case2(vector<vector<int>> &board, INFO &info) {
	int y = info.r, x = info.c;
	int tmp = up_left(board, y, x, info.m[3], board[y][x]);
	y -= info.m[3], x -= info.m[3];
	tmp = up_right(board, y, x, info.m[2], tmp);
	y -= info.m[2], x += info.m[2];
	tmp = down_right(board, y, x, info.m[1], tmp);
	y += info.m[1], x += info.m[1];
	down_left(board, y, x, info.m[0], tmp);
}

// 반시계
void case1(vector<vector<int>> &board, INFO &info) {
	int y = info.r, x = info.c;
	int tmp = up_right(board, y, x, info.m[0], board[y][x]);
	y -= info.m[0], x += info.m[0];
	tmp = up_left(board, y, x, info.m[1], tmp);
	y -= info.m[1], x -= info.m[1];
	tmp = down_left(board, y, x, info.m[2], tmp);
	y += info.m[2], x -= info.m[2];
	down_right(board, y, x, info.m[3], tmp);
}

void spin(vector<vector<int>> &board, INFO &info) {
	if (info.dir == 0) case1(board, info);
	else case2(board, info);
}

int main()
{
	fast;
	//int n;
	cin >> n;
	vector<vector<int>> board(n + 1, vector<int>(n + 1));
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cin >> board[i][j];
	}

	INFO info;
	cin >> info.r >> info.c >> info.m[0] >> info.m[1] >> info.m[2] >> info.m[3] >> info.dir;
	info.r--;
	info.c--;
	spin(board, info);
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) cout << board[i][j] << " ";
		cout << '\n';
	}
	return (0);
}