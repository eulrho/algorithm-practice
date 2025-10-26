// 직사각형을 만드는 방법
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int cnt = 1;
	for (int i=2; i<=n; i++) {
		for (int j=1; j<=i; j++) {
			if (i * j <= n) cnt++;
		}
	}
	cout << cnt;
	return (0);
}