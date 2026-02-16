// 정수 명령어
#include <iostream>
#include <set>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	string cmd;
	int n, x;
	for (int i=0; i<t; i++) {
		cin >> n;
		set<int> s;
		for (int j=0; j<n; j++) {
			cin >> cmd >> x;
			if (cmd == "I") s.insert(x);
			else if (cmd == "D" && x == 1) {
				if (s.empty()) continue ;
				auto back = s.end();
				back--;
				s.erase(back);
			}
			else {
				if (s.empty()) continue ;
				auto front = s.begin();
				s.erase(front);
			}
		}
		if (s.empty()) cout << "EMPTY\n";
		else {
			auto first = s.begin();
			auto back = s.end();
			back--;
			cout << *back << " " << *first << '\n';
		}
	}
	return (0);
}