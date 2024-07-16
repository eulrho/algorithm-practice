// 빨간 선과 파란 선
#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

#define RED 0
#define BLUE 1

typedef struct s_node {
	int cnt;
	int blue;
	int red;
} t_node;

bool cmp(t_node &a, t_node &b) {
	return a.cnt < b.cnt;
}

int main() {
	int n; cin >> n;
	int color, total_edge;
	deque<t_node> d;
	t_node tmp;

	for (int i=0; i<n; i++)
		d.push_back({1, 0, 0});

	for (int i=0; i<n-1; i++) {
		cin >> color;
		sort(d.begin(), d.end(), cmp);
		if (color == RED) {
			tmp = d.front();
			d.pop_front();
			d.front().cnt += tmp.cnt;
			d.front().blue += tmp.blue;
			total_edge = d.front().cnt * (d.front().cnt - 1) / 2;
			d.front().red = total_edge - d.front().blue;
		}
		else {
			tmp = d.back();
			d.pop_back();
			d.back().cnt += tmp.cnt;
			d.back().red += tmp.red;
			total_edge = d.back().cnt * (d.back().cnt - 1) / 2;
			d.back().blue = total_edge - d.back().red;
		}
	}
	//test
	cout << d.front().cnt << ' ' << d.front().blue << ' ';
	cout << d.front().red;
	return 0;
}
