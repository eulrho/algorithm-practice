// 2차원 바람
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct INFO {
	int r1 = -1, c1 = -1;
	int r2 = -1, c2 = -1;
};

int n, m;

int left(vector<vector<int>> &board, int row, int start, int dest, int tmp) {
	int num = board[row][start];
	for (int i=start; i<dest-1; i++)
		board[row][i] = board[row][i + 1];
	board[row][dest - 1] = tmp;
	return num;
}

int right(vector<vector<int>> &board, int row, int start, int dest) {
	int res = board[row][dest];
	for (int i=dest; i>start; i--)
		board[row][i] = board[row][i - 1];
	return res;
}

void up(vector<vector<int>> &board, int col, int start, int dest, int tmp) {
	for (int i=start; i<dest-1; i++)
		board[i][col] = board[i + 1][col];
	board[dest - 1][col] = tmp;
}

int down(vector<vector<int>> &board, int col, int start, int dest, int tmp) {
	int num = board[dest][col];
	for (int i=dest; i>start+1; i--)
		board[i][col] = board[i - 1][col];
	board[start + 1][col] = tmp;
	return num;
}

void shift(vector<vector<int>> &board, INFO &info) {
	int tmp = right(board, info.r1, info.c1, info.c2);
	tmp = down(board, info.c2, info.r1, info.r2, tmp);
	tmp = left(board, info.r2, info.c1, info.c2, tmp);
	up(board, info.c1, info.r1, info.r2, tmp);
}

int update(vector<vector<int>> &board, int y, int x) {
	int dy[4] = {-1, 0, 1, 0};
	int dx[4] = {0, 1, 0, -1};

	int sum = board[y][x];
	int cnt = 1;
	for (int k=0; k<4; k++) {
		if (y + dy[k] < 0 || y + dy[k] >= n || x + dx[k] < 0 || x + dx[k] >= m) continue ;
		sum += board[y + dy[k]][x + dx[k]];
		cnt++;
	}
	return sum / cnt;
}

void wind(vector<vector<int>> &board, INFO &info) {
	shift(board, info);

	vector<vector<int>> cpy_board = vector<vector<int>>(board);
	for (int i=info.r1; i<=info.r2; i++) {
		for (int j=info.c1; j<=info.c2; j++)
			cpy_board[i][j] = update(board, i, j);
	}
	board = cpy_board;
}

int main()
{
	fast;
	int q; cin >> n >> m >> q;
	vector<vector<int>> board(n, vector<int>(m));
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cin >> board[i][j];
	}

	INFO info;
	for (int i=0; i<q; i++) {
		cin >> info.r1 >> info.c1 >> info.r2 >> info.c2;
		info.r1--; info.r2--; info.c1--; info.c2--;
		wind(board, info);
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cout <<  board[i][j] << " ";
		cout << '\n';
	}
	return (0);
}