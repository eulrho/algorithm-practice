// 겹치지 않게 선분 고르기
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int n;
int max_cnt = 0;

void choice_lines(vector<pair<int, int>>& line, int *pos, int cnt, int idx) {
	if (idx == n) {
		max_cnt = max(max_cnt, cnt);
		return ;
	}
	bool flag = true;
	for (int i=line[idx].first; i<=line[idx].second; i++) {
		if (pos[i] == 1) {
			flag = false;
			break ;
		}
	}
	choice_lines(line, pos, cnt, idx + 1);
	if (flag)
	{
		for (int i=line[idx].first; i<=line[idx].second; i++) pos[i] = 1;
		choice_lines(line, pos, cnt + 1, idx + 1);
		for (int i=line[idx].first; i<=line[idx].second; i++) pos[i] = 0;
	}
}

int main()
{
	fast;
	cin >> n;
	vector<pair<int, int>> line;
	int x1, x2;
	for (int i=0; i<n; i++) {
		cin >> x1 >> x2;
		line.emplace_back(x1, x2);
	}
	int pos[1001] = {0};
	choice_lines(line, pos, 0, 0);
	cout << max_cnt;
	return (0);
}