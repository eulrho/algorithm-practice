// 사다리 타기
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct pos {
	int a;
	int b;
	bool isUsed = true;

	pos() {
		this->a = 0;
		this->b = 0;
	}

	pos(int a, int b) {
		this->a = a;
		this->b = b;
	}
};

int min_cnt = 100;
int max_depth = 0;

vector<int> game(int n, vector<pos>& lines) {
	vector<int> result(n);
	int board[20][20] = {0};
	for (int i=0; i<(int)lines.size(); i++) {
		if (lines[i].isUsed) board[lines[i].b][lines[i].a] = 1;
	}

	int current, depth;
	for (int i = 1; i <= n; i++) {
		current = i;
		depth = 1;
		while (depth <= max_depth) {
			if (board[depth][current - 1]) current = current - 1;
			else if (board[depth][current]) current = current + 1;
			depth++;
		}
		result[current - 1] = i;
	}
	return result;
}

bool cmp(int n, vector<int>& v1, vector<int>& v2) {
	for (int i=0; i<n; i++) {
		if (v1[i] != v2[i]) return false;
	}
	return true;
}

void choice_line(int n, int m, vector<pos>& lines, vector<int>& result, int idx, int cnt) {
	if (m == idx) {
		if (cnt < min_cnt) {
			vector<int> tmp = game(n, lines);
			if (cmp(n, tmp, result)) min_cnt = cnt;
		}
		return ;
	}
	choice_line(n, m, lines, result, idx + 1, cnt);
	lines[idx].isUsed = false;
	choice_line(n, m, lines, result, idx + 1, cnt - 1);
	lines[idx].isUsed = true;
}

int main()
{
	fast;
	int n, m;
	cin >> n >> m;

	vector<pos> lines;
	int a, b;
	for (int i=0; i<m; i++) {
		cin >> a >> b;
		lines.emplace_back(a, b);
		max_depth = max(max_depth, b);
	}
	vector<int> result = game(n, lines);
	choice_line(n, m, lines, result, 0, (int)lines.size());
	cout << min_cnt;
	return (0);
}