// 라디오
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b; cin >> a >> b;

	int min_diff = abs(a - b);
	int n; cin >> n;

	int f;
	for (int i=0; i<n; i++) {
		cin >> f;
		if (abs(f - b) + 1 < min_diff)
			min_diff = abs(f - b) + 1;
	}

	cout << min_diff;
	return (0);
}