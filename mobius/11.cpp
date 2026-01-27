// 아름다운 수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int cnt = 0;

void make_number(int n, int size) {
	if (size == n) {
		cnt++;
		return ;
	}
	for (int i=1; i<=4; i++) {
		if (size + i > n) continue ;
		make_number(n, size + i);
	}
}

int main()
{
	fast;
	int n; cin >> n;
	make_number(n, 0);
	cout << cnt;
	return (0);
}