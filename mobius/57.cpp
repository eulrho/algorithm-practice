// hashset 기본
#include <iostream>
#include <unordered_set>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	unordered_set<int> s;
	string cmd;
	int v;
	for (int i=0; i<n; i++) {
		cin >> cmd >> v;
		if (cmd == "find") {
			if (s.find(v) == s.end()) cout << "false\n";
			else cout << "true\n";
		}
		else if (cmd == "add") s.insert(v);
		else s.erase(v);
	}
	return (0);
}