// Cookie Piles
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	int n, a, d;
	for (int i=0; i<t; i++) {
		cin >> n >> a >> d;
		int sum = 0;
		for (int j=a; n>0; j+=d, n--)
			sum += j;
		cout << sum << '\n';
	}
	return (0);
}