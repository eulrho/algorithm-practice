// Electric Bill
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, n, x;
	cin >> a >> b >> n;

	for (int i=0; i<n; i++) {
		cin >> x;
		int tmp = min(x, 1000) * a;
		tmp += max(x - 1000, 0) * b;
		cout << x << ' ' << tmp << '\n';
 	}
	return (0);
}