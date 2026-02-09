// 그래프 탐색
#include <iostream>
#include <vector>
#include <stack>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void find_node(vector<vector<int>>& edge) {
	int arr[1001] = {0};
	stack<int> st;
	st.push(1);
	arr[1] = 1;

	int node, cnt = 0;
	while (!st.empty()) {
		node = st.top();

		bool check = false;
		for (int i=0; i<(int)edge[node].size(); i++) {
			if (arr[edge[node][i]] == 0) {
				arr[edge[node][i]] = 1;
				st.push(edge[node][i]);
				cnt++;
				check = true;
				break ;
			}
		}
		if (!check) st.pop();
	}
	cout << cnt;
}

int main()
{
	fast;
	int n, m; cin >> n >> m;
	vector<vector<int>> edge(n+1);
	int x, y;
	for (int i=0; i<m; i++) {
		cin >> x >> y;
		edge[x].push_back(y);
		edge[y].push_back(x);
	}
	find_node(edge);
	return (0);
}