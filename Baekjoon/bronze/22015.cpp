// 金平糖 (Konpeito)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c; cin >> a >> b >> c;
	int tmp = max(max(a, b), c);
	cout << tmp * 3 - a - b - c;
	return (0);
}