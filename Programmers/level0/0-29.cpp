// 전국 대회 선발 고사
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.first < b.first;
}

int solution(vector<int> rank, vector<bool> attendance) {
	int answer = 0;
	int size = rank.size();
	vector<pair<int, int>> tmp;
	for (int i=0; i<size; i++) {
		if (!attendance[i]) continue ;
		tmp.emplace_back(rank[i], i);
	}
	sort(tmp.begin(), tmp.end(), cmp);
	answer = 10000 * tmp[0].second + 100 * tmp[1].second + tmp[2].second;
	return answer;
}

int main()
{
	fast;
	vector<int> rank = {3, 7, 2, 5, 4, 6, 1};
	vector<bool> attendance = {false, true, true, true, true, false, false};

	cout << solution(rank, attendance);
	return 0;
}
