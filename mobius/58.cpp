// treeset 기본
#include <iostream>
#include <set>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	set<int> s;
	string cmd;
	int x;
	for (int i=0; i<n; i++) {
		cin >> cmd;
		if (cmd == "find") {
			cin >> x;
			if (s.find(x) == s.end()) cout << "false\n";
			else cout << "true\n";
		}
		else if (cmd == "add") {
			cin >> x;
			s.insert(x);
		}
		else if (cmd == "remove") {
			cin >> x;
			s.erase(x);
		}
		else if (cmd == "lower_bound") {
			cin >> x;
			auto iter = s.lower_bound(x);
			if (iter == s.end()) cout << "None\n";
			else cout << *iter << '\n';
		}
		else if (cmd == "upper_bound") {
			cin >> x;
			auto iter = s.upper_bound(x);
			if (iter == s.end()) cout << "None\n";
			else cout << *iter << '\n';
		}
		else if (cmd == "largest") {
			if (s.empty()) cout << "None\n";
			else {
				auto iter = s.end();
				iter--;
				cout << *iter << '\n';
			}
		}
		else {
			if (s.empty()) cout << "None\n";
			else {
				auto iter = s.begin();
				cout << *iter << '\n';
			}
		}
	}
	return (0);
}