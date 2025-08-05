// 개구리 점프
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct pos {
	int x1, x2, y;
	int num;
	int line = 1;
};

bool cmp(pos &p1, pos &p2) {
	if (p1.x1 == p2.x1) return p1.x2 < p2.x2;
	return p1.x1 < p2.x1;
}

int main()
{
	fast;
	int n, q; cin >> n >> q;
	vector<pos> info(n);
	for (int i=0; i<n; i++) {
		cin >> info[i].x1 >> info[i].x2 >> info[i].y;
		info[i].num = i + 1;
	}
	sort(info.begin(), info.end(), cmp);
	int right = info[0].x2;
	for (int i=1; i<n; i++) {
		if (right >= info[i].x1) {
			info[i].line = info[i - 1].line;
			right = max(right, info[i].x2);
		}
		else {
			info[i].line = info[i - 1].line + 1;
			right = info[i].x2;
		}
	}
	map<int, int> tag;
	for (int i=0; i<n; i++) tag[info[i].num] = i;
	int numA, numB;
	for (int i=0; i<q; i++) {
		cin >> numA >> numB;
		cout << (info[tag[numA]].line == info[tag[numB]].line) << '\n';
	}
	return (0);
}