// 큰 숫자만 계속 고르기
#include <iostream>
#include <queue>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	priority_queue<int> s;
	int x;
	for (int i=0; i<n; i++) {
		cin >> x;
		s.push(x);
	}
	for (int i=0; i<m; i++) {
		int tmp = s.top() - 1;
		s.pop();
		s.push(tmp);
	}
	cout << s.top();
	return (0);
}