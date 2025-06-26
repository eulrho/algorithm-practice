// Checker
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long long a, b; cin >> a >> b;
	if (b == 0 || a >= b) cout << b;
	else cout << a + 1;
	return (0);
}