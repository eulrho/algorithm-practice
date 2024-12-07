// 수열이에요?
#include <iostream>
#include <algorithm>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, l, r; cin >> n >> l >> r;

	vector<int> a(n);
	for (int i=0; i<n; i++)
		cin >> a[i];

	sort(a.begin() + l - 1, a.begin() + r);

	bool flag = true;
	for (int i=1; i<n; i++) {
		if (a[i] - a[i - 1] < 0) {
			flag = false;
			break ;
		}
	}

	cout << flag;
	return (0);
}