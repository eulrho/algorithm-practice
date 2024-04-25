// 몇개고?
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, s;

	cin >> t >> s;
	if (t > 11 && t <= 16 && s == 0) cout << 320;
	else cout << 280;
	return (0);
}