// 단순한 동전 챙기기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct pos {
	int y, x;
	int value;

	pos() {
		this->y = 0;
		this->x = 0;
		this->value = 0;
	}

	pos(int y, int x, int value) {
		this->y = y;
		this->x = x;
		this->value = value;
	}
};

bool cmp(pos& p1, pos& p2) {
	return p1.value < p2.value;
}

int min_cnt = 100000;

int get_coins(vector<pos>& choice, pos start, pos end) {
	int res = 0;
	int y = start.y, x = start.x;
	for (int i=0; i<(int)choice.size(); i++) {
		res += abs(choice[i].y - y) + abs(choice[i].x - x);
		y = choice[i].y;
		x = choice[i].x;
	}
	res += abs(end.y - y) + abs(end.x - x);
	return res;
}

void find_min_cnt(vector<pos>& coins, vector<pos>& choice, int idx, pos start, pos end) {
	if (choice.size() == 3) {
		int tmp = get_coins(choice, start, end);
		min_cnt = min(min_cnt, tmp);
		return ;
	}
	for (int i=idx; i<(int)coins.size(); i++) {
		choice.push_back(coins[i]);
		find_min_cnt(coins, choice, i + 1, start, end);
		choice.pop_back();
	}
}

int main()
{
	fast;
	int n; cin >> n;
	string board[n];
	for (int i=0; i<n; i++) cin >> board[i];
	vector<pos> coins;
	pos start;
	pos end;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (board[i][j] >= '1' && board[i][j] <= '9')
				coins.emplace_back(i, j, board[i][j] - '0');
			else if (board[i][j] == 'S')
				start = pos(i, j, -1);
			else if (board[i][j] == 'E')
				end = pos(i, j, -1);
		}
	}
	if (coins.size() < 3) {
		cout << -1;
		return 0;
	}
	sort(coins.begin(), coins.end(), cmp);
	vector<pos> choice;
	find_min_cnt(coins, choice, 0, start, end);
	cout << min_cnt;
	return (0);
}