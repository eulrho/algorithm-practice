// 스퀘어 128.0
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
#define fast std::ios_base::sync_with_stdio(false);std::cin.tie(NULL);

int Answer;

int main(int argc, char** argv)
{
	fast;
	int T, test_case, n, q, l, r;
	//freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case < T; test_case++)
	{
		cin >> n;
		int a[n+1], tmp;
		for (int i=1; i<=n; i++)
			cin >> a[i];
		cin >> q;

		cout << "Case #" << test_case+1 << endl;
		for (int i=0; i<q; i++) {
			cin >> l >> r;

			map<int, int> m;
			Answer = 0;
			for (int j=l; j<=r; j++) {
				if (a[j] == 1 || a[j] > 50000) continue ;
				if (m.find(a[j]) == m.end())
					m.insert(make_pair(a[j], 1));
				else m[a[j]]++;
			}
			for (auto iter : m) {
				tmp = iter.second / iter.first;
				Answer += tmp;
				if (iter.first > 50000 / iter.first) continue ;
				if (m.find(iter.first * iter.first) != m.end())
					m[iter.first * iter.first] += tmp;
				else m.insert(make_pair(iter.first * iter.first, tmp));
			}
			cout << Answer << endl;
		}
	}
	return 0;
}