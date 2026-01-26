// 1차원 바람
#include <iostream>
#include <deque>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int n, m;

void left(deque<deque<int>> &board, int row) {
	int tmp = board[row][m - 1];
	board[row].push_front(tmp);
	board[row].pop_back();
}

void right(deque<deque<int>> &board, int row) {
	int tmp = board[row][0];
	board[row].push_back(tmp);
	board[row].pop_front();
}

bool check_match(deque<deque<int>> &board, int row, int target) {
	for (int i=0; i<m; i++) {
		if (board[row][i] == board[target][i])
			return true;
	}
	return false;
}

void change_direction(char &c) {
	if (c == 'L') c = 'R';
	else c = 'L';
}

void shift(deque<deque<int>> &board, int r, char d) {
	if (d == 'L') left(board, r);
	else right(board, r);
}

void wind(deque<deque<int>> &board, int r, char d) {
	shift(board, r, d);

	int idx = r - 1;
	char new_d = d;
	while (idx >= 0 && check_match(board, idx + 1, idx)) {
		change_direction(new_d);
		shift(board, idx, new_d);
		idx--;
	}

	idx = r + 1;
	new_d = d;
	while (idx < n && check_match(board, idx - 1, idx)) {
		change_direction(new_d);
		shift(board, idx, new_d);
		idx++;
	}
}

int main()
{
	fast;
	int q; cin >> n >> m >> q;
	deque<deque<int>> board;
	for (int i=0; i<n; i++) {
		deque<int> tmp;
		int num;
		for (int j=0; j<m; j++) {
			cin >> num;
			tmp.push_back(num);
		}
		board.push_back(tmp);
	}

	int r;
	char d;
	for (int i=0; i<q; i++) {
		cin >> r >> d;
		wind(board, r - 1, d);
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) cout <<  board[i][j] << " ";
		cout << '\n';
	}
	return (0);
}