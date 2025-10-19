// Lifeguards (Bronze)
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
	if (p1.first == p2.first) return p1.second < p2.second;
	return p1.first < p2.first;
}

int main()
{
	fast;
	int n; cin >> n;
	vector<pair<int, int>> time;
	int s, e;
	for (int i=0; i<n; i++) {
		cin >> s >> e;
		time.push_back({s, e});
	}
	sort(time.begin(), time.end(), cmp);

	int max_amount = 0;
	for (int i=0; i<n; i++) {
		int sum = 0;
		int end_time = -1, start_time = -1;
		for (int j=0; j<n; j++) {
			if (i == j) continue ;
			if (start_time == -1) {
				start_time = time[j].first;
				end_time = time[j].second;
			}
			else {
				if (time[j].first <= end_time) end_time = time[j].second;
				else {
					sum += end_time - start_time;
					start_time = time[j].first;
					end_time = time[j].second;
				}
			}
		}
		if (end_time != -1) sum += end_time - start_time;
		max_amount = max(max_amount, sum);
	}
	cout << max_amount;
	return (0);
}
