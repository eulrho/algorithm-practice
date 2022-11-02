// 큐
#include <iostream>
#include <queue>
using namespace std;
int main() {
	int n, num; cin >> n;

	queue<int> q;
	string command;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			q.push(num);
		}
		else if (command == "front") {
			if (q.empty()) cout << -1 << "\n";
			else cout << q.front() << "\n";
		}
		else if (command == "back") {
			if (q.empty()) cout << -1 << "\n";
			else cout << q.back() << "\n";
		}
		else if (command == "size") cout << q.size() << "\n";
		else if (command == "empty") cout << q.empty() << "\n";
		else if (command == "pop") {
			if (q.empty()) cout << -1 << "\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
	}
	return 0;
}