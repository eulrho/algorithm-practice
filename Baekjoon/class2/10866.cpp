// 덱
#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, num; cin >> n;

	string command;
	deque<int> d;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push_front") {
			cin >> num;
			d.push_front(num);
		}
		else if (command == "push_back") {
			cin >> num;
			d.push_back(num);
		}
		else if (command == "pop_front") {
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (command == "pop_back") {
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (command == "front") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.front() << "\n";
		}
		else if (command == "back") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.back() << "\n";
		}
		else if (command == "size") cout << d.size() << "\n";
		else if (command == "empty") cout << d.empty() << "\n";
	}

	return 0;
}