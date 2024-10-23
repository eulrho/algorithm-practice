// Pizza Deal
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, p1, r, p2;

	cin >> a >> p1 >> r >> p2;
	if ((double)a / p1 < (double)r * r * 3.14159265358979 / p2) cout << "Whole pizza";
	else cout << "Slice of pizza";
	return (0);
}