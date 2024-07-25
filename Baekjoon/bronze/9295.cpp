// 주사위
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, a, b;

	cin >> t;
	for (int i=1; i<=t; i++) {
		cin >> a >> b;
		cout << "Case " << i << ": " << a + b << '\n';
	}
	return (0);
}