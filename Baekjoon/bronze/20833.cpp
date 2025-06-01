// Kuber
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int res = 0;
	for (int i=1; i<=n; i++) {
		res += i * i * i;
	}
	cout << res;
	return (0);
}