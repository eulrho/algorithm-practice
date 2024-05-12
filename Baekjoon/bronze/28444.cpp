// HI-ARC=?
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int h, i, a, r, c;

	cin >> h >> i >> a >> r >> c;
	cout << h * i - a * r * c;
	return (0);
}