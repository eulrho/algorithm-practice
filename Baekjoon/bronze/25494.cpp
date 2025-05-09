// 단순한 문제 (Small)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int a, b, c;
	for (int i=0; i<n; i++) {
		cin >> a >> b >> c;
		cout << min(a, min(b, c)) << '\n';
	}
	return (0);
}