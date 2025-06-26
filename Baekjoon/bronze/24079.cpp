// 移動 (Moving)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int x, y, z; cin >> x >> y >> z;
	if (x + y <= z) cout << 1;
	else cout << 0;
	return (0);
}