// 플러그
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int plugs[n];
	for (int i=0; i<n; i++) cin >> plugs[i];
	sort(plugs, plugs + n);
	int cnt = 0;
	for (int i=n-1; i>=0; i--) {
		cnt += plugs[i];
		if (i != 0) --cnt;
	}
	cout << cnt;
	return (0);
}