// Ljeto
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int t, a, b, blueberry = 0, pineapple = 0;
	vector<vector<int>> logs(9);
	for (int i=0; i<n; i++) {
		cin >> t >> a >> b;
		logs[a].push_back(t);

		int tmp = 100, size = (int)logs[a].size();
		if (size >= 2 && t - logs[a][size - 2] <= 10)
			tmp += 50;
		if (a >= 1 && a <= 4) pineapple += tmp;
		else blueberry += tmp;
	}
	cout << pineapple << " " << blueberry;
	return (0);
}