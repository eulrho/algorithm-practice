// 맨해튼 거리
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int cnt = 0;
	int f_even = n % 2 == 0;
	for (int i=-n; i<=n; i++) {
		for (int j=-n+abs(i); j<=n-abs(i); j++) {
			int tmp = abs(i) + abs(j);
			if (tmp <= n && (f_even && tmp % 2 == 0 || !f_even && tmp % 2 != 0)) cnt++;
		}
	}
	cout << cnt;
	return (0);
}