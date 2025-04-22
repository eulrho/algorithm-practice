// Bicycle
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, x, b, y, T;
	cin >> a >> x >> b >> y >> T;

	int tmp = a;
	if (T > 30) tmp += (T - 30) * x * 21;
	cout << tmp << ' ';

	tmp = b;
	if (T > 45) tmp += (T - 45) * y * 21;
	cout << tmp;
	return (0);
}