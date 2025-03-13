// 학생별 통화 요금 계산
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int convertToMinute(string time)
{
	return stoi(time.substr(3, 2)) + stoi(time.substr(0, 2)) * 60;
}

int calculateCost(int time)
{
	if (time <= 100) return 10;
	time -= 100;
	return (int)ceil((double)time / 50.0) * 3 + 10;
}

bool cmp(pair<string, int> &p1, pair<string, int> &p2) {
	if (p1.second == p2.second) return p1.first < p2.first;
	return p1.second > p2.second;
}

int main()
{
	fast;
	int n; cin >>  n;
	string time, name;
	map<string, int> logs;
	vector<pair<string, int>> costs;

	for (int i=0; i<n; i++) {
		cin >> time >> name;
		int tmp = convertToMinute(time);
		if (logs.find(name) == logs.end())
			logs[name] = tmp;
		else logs[name] += tmp;
	}

	for (map<string, int>::iterator iter = logs.begin(); iter != logs.end(); iter++)
		costs.push_back({iter->first, calculateCost(iter->second)});

	sort(costs.begin(), costs.end(), cmp);

	for (int i=0; i<(int)costs.size(); i++)
		cout << costs[i].first << ' ' << costs[i].second << '\n';
	return (0);
}