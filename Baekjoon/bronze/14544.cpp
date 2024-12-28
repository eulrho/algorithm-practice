// Vote
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool cmp(pair<string, int> &p1, pair<string, int> &p2)
{
	return p1.second > p2.second;
}

int main()
{
	fast;
	int p, n, m, score;
	string name, c;

	cin >> p;
	for (int i=1; i<=p; i++) {
		cin >> n >> m;

		map<string, int> vote;
		for (int j=0; j<n; j++) {
			cin >> name;
			vote[name] = 0;
		}
		for (int j=0; j<m; j++) {
			cin >> name >> score >> c;
			vote[name] += score;
		}

		vector<pair<string, int>> tmp = vector<pair<string, int>>(vote.begin(), vote.end());
		sort(tmp.begin(), tmp.end(), cmp);
		if (n > 1 && tmp[0].second == tmp[1].second)
			cout << "VOTE " << i << ": THERE IS A DILEMMA\n";
		else cout << "VOTE " << i << ": THE WINNER IS " << tmp[0].first << ' ' << tmp[0].second << '\n';
	}
	return (0);
}