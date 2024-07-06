// 보안망 점검 200.0
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
#define fast std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

long long Answer;

int find_net(vector<vector<int> > net, int target, bool *visited)
{
	int res=1, x, new_target;
	queue<int> queue;

	queue.push(target);
	while (!queue.empty()) {
		x = queue.front();
		queue.pop();
		for (int i=0; i<2; i++) {
			new_target = net[x][i];
			if (!visited[new_target] && (int)net[new_target].size() == 2) {
				visited[new_target] = true;
				queue.push(new_target);
				res++;
			}

		}
	}
	return res;
}

int main(int argc, char** argv)
{
	fast;
	int T, test_case, n;
	freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;
		cin >> n;
		int x, y, tmp;
		bool visited[n+1];
		for (int j=0; j<n+1; j++) visited[j] = false;
		vector<vector<int> > net(n+1);

		for (int i=0; i<n+1; i++) {
			cin >> x >> y;
			net[x].push_back(y);
			net[y].push_back(x);
		}
		for (int i=1; i<=n; i++) {
			if ((int)net[i].size() == 2) {
				if (!visited[i]) {
					visited[i] = true;
					tmp = find_net(net, i, visited);
					for (int j=1; j<=tmp; j++)
						Answer += (long long)(tmp - j + 1);
				}
			}
		}
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;
}