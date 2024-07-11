// 트리 위의 게임
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct s_node {
	int node=-1;
	vector<int> child;
} t_node;

int max_depth;

void insert_tree(vector<vector<int>> edge, vector<vector<int>> &depth, t_node *tree, int n)
{
	int front, new_node;
	queue<int> q, tmp;

	q.push(1);
	tree[1].node = 1;
	depth[1].push_back(1);
	for (int k=2; k<=n; k++) {
		while (!q.empty()) {
			front = q.front();
			q.pop();
			for (int i=0; i<(int)edge[front].size(); i++) {
				new_node = edge[front][i];
				if (tree[new_node].node != -1) continue ;
				tmp.push(new_node);
				tree[front].child.push_back(new_node);
				tree[new_node].node = new_node;
				depth[k].push_back(new_node);
			}
		}
		q = tmp;
		if (q.empty()) {
			max_depth = k - 1;
			return ;
		}
		tmp = queue<int>();
	}

}

int main() {
	int n, u, v, data; cin >> n;
	vector<vector<int>> edge(n+1);
	vector<vector<int>> depth(n+1);
	t_node tree[n+1];

	for (int i=0; i<n-1; i++) {
		cin >> u >> v;
		edge[u].push_back(v);
		edge[v].push_back(u);
	}
	insert_tree(edge, depth, tree, n);
	for (int i=max_depth; i>=1; i--) {
		for (int j=0; j<(int)depth[i].size(); j++) {
			data = depth[i][j];
			if (tree[data].child.empty()) continue ;

			int data_min = tree[tree[data].child[0]].node;
			for (int k=1; k<(int)tree[data].child.size(); k++)
				data_min = min(data_min, tree[tree[data].child[k]].node);
			tree[data].node -= data_min;
		}
	}
	for (int i=1; i<=n; i++) {
		if (tree[i].node >= 0) cout << "1\n";
		else cout << "0\n";
	}
	return (0);
}
