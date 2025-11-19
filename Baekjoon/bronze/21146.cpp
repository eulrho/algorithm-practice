// Rating Problems
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, k; cin >> n >> k;
	int r;
	double min_avg = -3 * (n - k), max_avg = 3 * (n - k);
	for (int i=0; i<k; i++) {
		cin >> r;
		min_avg += r;
		max_avg += r;
	}
	cout.precision(4);
	cout << fixed;
	cout << min_avg / n << " " << max_avg / n;
	return (0);
}