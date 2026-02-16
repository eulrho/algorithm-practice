// 정수 명령 처리 6
#include <iostream>
#include <queue>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	priority_queue<int> s;
	string cmd;
	int x;
	for (int i=0; i<n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> x;
			s.push(x);
		}
		else if (cmd == "pop") {
			cout << s.top() << '\n';
			s.pop();
		}
		else if (cmd == "size")
			cout << s.size() << '\n';
		else if (cmd == "empty") {
			cout << s.empty() << '\n';
		}
		else cout << s.top() << '\n';
	}
	return (0);
}