// 가장 가까운 점
#include <iostream>
#include <queue>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct cmp{
	bool operator()(pair<int, int>& p1, pair<int, int>& p2) {
		int diff1 = p1.first + p1.second;
		int diff2 = p2.first + p2.second;
		if (diff1 == diff2) {
			if (p1.first == p2.first)
				return p1.second > p2.second;
			return p1.first > p2.first;
		}
		else return diff1 > diff2;
	}
};

int main()
{
	fast;
	int n, m; cin >> n >> m;
	priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
	int x, y;
	for (int i=0; i<n; i++) {
		cin >> x >> y;
		pq.push({x, y});
	}
	for (int i=0; i<m; i++) {
		pair<int, int> tmp = pq.top();
		pq.pop();
		tmp.first += 2;
		tmp.second += 2;
		pq.push(tmp);
	}
	cout << pq.top().first << " " << pq.top().second;
	return (0);
}