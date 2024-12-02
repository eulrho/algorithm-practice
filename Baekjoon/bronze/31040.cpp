// Nine Knights
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_valid(string *board, int y, int x)
{
	if (y - 2 >= 0) {
		if (x - 1 >= 0 && board[y - 2][x - 1] == 'k') return false;
		if (x + 1 < 5 && board[y - 2][x + 1] == 'k') return false;
	}
	else if (y - 1 >= 0) {
		if (x - 2 >= 0 && board[y - 1][x - 2] == 'k') return false;
		if (x + 2 < 5 && board[y - 1][x + 2] == 'k') return false;
	}
	else if (y + 1 < 5) {
		if (x - 2 >= 0 && board[y + 1][x - 2] == 'k') return false;
		if (x + 2 < 5 && board[y + 1][x + 2] == 'k') return false;
	}
	else if (y + 2 < 5){
		if (x - 1 >= 0 && board[y + 2][x - 1] == 'k') return false;
		if (x + 1 < 5 && board[y + 2][x + 1] == 'k') return false;
	}
	return true;
}

int main()
{
	fast;
	int t; cin >> t;

	for (int i=0; i<t; i++) {
		string board[5];
		for (int j=0; j<5; j++) cin >> board[j];

		int cnt = 0;
		bool flag = true;
		for (int j=0; j<5; j++) {
			for (int k=0; k<5; k++) {
				if (board[j][k] == 'k')
				{
					if (is_valid(board, j, k)) cnt++;
					else flag = false;
				}
			}
		}

		if (cnt != 9 || !flag) cout << "invalid\n";
		else cout << "valid\n";
	}
	return (0);
}