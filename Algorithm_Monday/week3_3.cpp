// 구름이의 여행
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int n, m, k, a, b, count=0; 
	cin >> n >> m >> k;

	vector<int> v[5001];
	queue<int> q;
	vector<int> visit(n + 1, -1);
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	q.push(1);
	visit[1] = 0;
	while (!q.empty()) {
		int cur = q.front(); q.pop();
		for (int& next:v[cur]) {
			if (visit[next] != -1) continue;
			q.push(next);
			visit[next] = visit[cur] + 1;
		}
	}

	if (visit[n] <= k && visit[n] != -1)
		cout << "YES";
	else cout << "NO";

	return 0;
}
