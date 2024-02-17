// ATM
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, p[1001], res=0, mult;

	cin >> n;
	mult = n;
	for (int i=0; i<n; i++)
		cin >> p[i];
	sort(p, p+n);
	for (int i=0; i<n; i++) {
		res += p[i] * mult;
		mult--;
	}
	cout << res;
	return (0);
}
