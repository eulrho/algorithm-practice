// 帰省 (Homecoming)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c; cin >> a >> b >> c;
	cout << (c >= a && c < b);
	return (0);
}