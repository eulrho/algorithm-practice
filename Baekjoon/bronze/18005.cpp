// Even or Odd?
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	n %= 4;
	if (n == 0) cout << 2;
	else if (n == 1 || n == 3) cout << 0;
	else cout << 1;
	return (0);
}