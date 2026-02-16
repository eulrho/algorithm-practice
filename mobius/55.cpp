// treemap 기본
#include <iostream>
#include <map>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	map<int, int> m;
	string cmd;
	int k, v;
	for (int i=0; i<n; i++) {
		cin >> cmd;
		if (cmd == "find") {
			cin >> k;
			if (m.find(k) == m.end()) cout << "None\n";
			else cout << m[k] << '\n';
		}
		else if (cmd == "add") {
			cin >> k >> v;
			m[k] = v;
		}
		else if (cmd == "remove")
		{
			cin >> k;
			m.erase(m.find(k));
		}
		else {
			if (m.empty()) cout << "None\n";
			else {
				for (auto iter : m)
					cout << iter.second << " ";
				cout << '\n';
			}
		}
	}
	return (0);
}