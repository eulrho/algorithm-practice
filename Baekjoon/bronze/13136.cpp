// Do Not Touch Anything
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int r, c, n;

	cin >> r >> c >> n;

	long long res = (long long)ceil((double)r / n) * (long long)ceil((double)c / n);
	cout << res;
	return (0);
}