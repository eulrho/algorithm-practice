// 선물
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	int min_cost = a[0] + a[1], tmp = min_cost;
	for (int i=2; i<n; i++) {
		tmp = tmp - a[i - 2] + a[i];
		min_cost = min(min_cost, tmp);
	}
	cout << min_cost * x;
	return (0);
}