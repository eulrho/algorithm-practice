// RICE SACK
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, a[5];

	cin >> t;
	for (int i=1; i<=t; i++) {
		for (int j=0; j<5; j++) cin >> a[j];
		sort(a, a+5);
		cout << "Case #" << i << ": " << a[4] << '\n';
	}
	return (0);
}