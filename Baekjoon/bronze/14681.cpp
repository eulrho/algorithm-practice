// 사분면 고르기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int x, y;

	cin >> x >> y;
	if (x > 0 && y > 0) cout << 1;
	else if (x < 0 && y > 0) cout << 2;
	else if (x > 0 && y < 0) cout << 4;
	else cout << 3;
	return (0);
}