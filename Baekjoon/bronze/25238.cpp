// 가희와 방어율 무시
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double a, b;
	cin >> a >> b;
	if (a - (a / 100 * b) >= 100)
		cout << 0;
	else
		cout << 1;
}