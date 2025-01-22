// ICONS
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int min[2] = {1, n};
	for (int i=2; i<n; i++) {
		int tmp = (int)ceil((double)n / i);
		if (min[0] + min[1] > i + tmp) {
			min[0] = i;
			min[1] = tmp;
		}
	}
	cout << min[0] << ' ' << min[1];
	return (0);
}