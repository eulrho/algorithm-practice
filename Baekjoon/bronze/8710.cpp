// Koszykarz
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double k, w, m, target;

	cin >> k >> w >> m;
	target = w - k;
	cout << (int)ceil(target / m);
	return (0);
}