// Piece of Cake!
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, h, v;
	cin >> n >> h >> v;
	cout << 4 * max(h, n - h) * max(v, n - v);
	return (0);
}