// 최소 정수 출력
#include <iostream>
#include <queue>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	priority_queue<long long, vector<long long>, greater<>> s;
	long long x;
	for (int i=0; i<n; i++) {
		cin >> x;
		if (x == 0) {
			if (s.empty()) cout << "0\n";
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else s.push(x);
	}
	return (0);
}