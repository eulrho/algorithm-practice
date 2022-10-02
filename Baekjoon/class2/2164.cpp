// 카드2
#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	
	while (n!=1) {
		q.pop();
		n--;
		if (n != 1) {
			q.push(q.front());
			q.pop();
		}
	}

	cout << q.front();

	return 0;
}