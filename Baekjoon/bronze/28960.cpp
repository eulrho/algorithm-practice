// Плащ левитации
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int h, l, a, b;

	cin >> h >> l >> a >> b;
	if (a <= l && (int)ceil((double)b / 2) <= h) cout << "YES";
	else if (b <= l && (int)ceil((double)a / 2) <= h) cout << "YES";
	else cout << "NO";
	return (0);
}