// 스택
#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num; cin >> n;

	string command;
	stack<int> s;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			s.push(num);
		}
		else if (command == "top") {
			if (s.empty()) cout << -1 << "\n";
			else cout << s.top() << "\n";
		}
		else if (command == "size") cout << s.size() << "\n";
		else if (command == "empty") cout << s.empty() << "\n";
		else if (command == "pop") {
			if (s.empty()) cout << -1 << "\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
	}

	return 0;
}