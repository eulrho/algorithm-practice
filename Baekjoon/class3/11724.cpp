// 연결 요소의 개수 bj.11724
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int n, m;
int visited[1001] = {0, };

void bfs(vector<vector<int>> edges, int num)
{
	queue<int> queue;
	int node, size;

	queue.push(num);
	while (!queue.empty()) {
		node = queue.front();
		size = (int)edges[node].size();
		for (int k=0; k<size; k++) {
			if (visited[edges[node][k]] == 0) {
				queue.push(edges[node][k]);
				visited[edges[node][k]] = 1;
			}
		}
		queue.pop();
	}
}

int count_con_com(vector<vector<int>> edges)
{
	int cnt = 0;

	for (int i=1; i<=n; i++) {
		if (visited[i] == 0) {
			visited[i] = 1;
			bfs(edges, i);
			cnt++;
		}
	}
	return (cnt);
}

int main()
{
	fast;
	int u, v;

	cin >> n >> m;
	vector<vector<int>> edges(n+1);
	for (int i=0; i<m; i++) {
		cin >> u >> v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	cout << count_con_com(edges);
	return (0);
}