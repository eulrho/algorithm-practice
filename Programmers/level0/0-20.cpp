// 주사위 게임 3
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int>& p1, pair<int, int>& p2) {
	return p1.second > p2.second;
}

int solution(int a, int b, int c, int d) {
	int answer = 0;
	int arr[7] = {0};

	arr[a]++;
	arr[b]++;
	arr[c]++;
	arr[d]++;

	vector<pair<int, int>> tmp;
	int min_num = 10;
	for (int i=1; i<=6; i++) {
		if (arr[i] != 0) {
			tmp.emplace_back(i, arr[i]);
			min_num = min(min_num, i);
		}
	}

	sort(tmp.begin(), tmp.end(), cmp);

	int size = (int)tmp.size();
	if (size == 1)
		answer = 1111 * tmp[0].first;
	else if (size == 2) {
		if (tmp[0].second == 2)
			answer = (tmp[0].first + tmp[1].first) * abs(tmp[0].first - tmp[1].first);
		else if (tmp[0].second == 3)
			answer = (int)pow((10 * tmp[0].first + tmp[1].first), 2);
	}
	else if (size == 3)
		answer = tmp[1].first * tmp[2].first;
	else answer = min_num;
	return answer;
}