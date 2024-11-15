// Good Fours and Good Fives
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, res=0; cin >> n;

	for (int i=0; i<=n/4; i++) {
		if ((n - 4 * i) % 5 == 0) res++;
	}
	cout << res;
	return (0);
}