// License to Launch
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int min = 1000000000, res = -1, k;
	for (int i=0; i<n; i++) {
		cin >> k;
		if (res == -1 || min > k) {
			min = k;
			res = i;
		}
	}
	cout << res;
	return (0);
}