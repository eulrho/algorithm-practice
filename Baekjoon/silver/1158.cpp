// 요세푸스 문제
#include <iostream>
#include <queue>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, k; cin >> n >> k;
	queue<int> q;
	for (int i=1; i<=n; i++) q.push(i);

	int seq = 1;
	cout << "<";
	while(!q.empty()) {
		int target = q.front();
		q.pop();
		if (seq == k) {
			cout << target;
			if (q.empty()) cout << ">";
			else cout << ", ";
			seq = 0;
		}
		else q.push(target);
		seq++;
	}
	return (0);
}