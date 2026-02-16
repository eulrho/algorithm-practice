// 친한 점
#include <iostream>
#include <set>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct cmp {
	bool operator()(const pair<int, int> &a, const pair<int, int> &b) {
		if (a.first == b.first) return a.second <= b.second;
		return a.first < b.first;
	}
};

int main()
{
	fast;
	int n, m; cin >> n >> m;
	set<pair<int, int>, cmp> s;
	int x, y;
	for (int i=0; i<n; i++) {
		cin >> x >> y;
		s.insert({x, y });
	}
	for (int i=0; i<m; i++) {
		cin >> x >> y;
		auto iter = s.upper_bound({x, y});
		if (iter == s.end()) cout << "-1 -1\n";
		else cout << iter->first << " " << iter->second << '\n';
	}
	return (0);
}