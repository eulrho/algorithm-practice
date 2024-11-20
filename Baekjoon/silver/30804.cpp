// 과일 탕후루
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, type; cin >> n;

	vector<pair<int, int>> info;
	for (int i=0; i<n; i++) {
		cin >> type;
		if (info.empty() || info.back().first != type)
			info.emplace_back(type, 1);
		else info.back().second++;
	}

	int size = (int)info.size();
	if (size == 1) {
		cout << info[0].second;
		return 0;
	}

	int left=0, right=0, max_cnt=0, tmp=0;
	map<int, int> sample;
	while (right < size) {
		while (right < size) {
			if (sample.find(info[right].first) == sample.end()) {
				if (sample.size() == 2) {
					max_cnt = max(max_cnt, tmp);
					tmp -= info[left].second;
					sample[info[left].first]--;
					if (sample[info[left].first] == 0)
						sample.erase(info[left].first);
					left++;
					break ;
				}
				else sample[info[right].first] = 1;
			}
			else sample[info[right].first]++;
			tmp += info[right].second;
			right++;
		}
		if (right == size) max_cnt = max(max_cnt, tmp);
	}
	cout << max_cnt;
	return 0;
}
