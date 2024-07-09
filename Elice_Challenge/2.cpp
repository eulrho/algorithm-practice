// 정리 정돈을 좋아하는 k씨
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m, a, b, c; cin >> n >> m;
	int arr[n + 1], size;
	for (int i=1; i<=n; i++) cin >> arr[i];

	for (int i=0; i<m; i++) {
		cin >> a >> b >> c;
		size = b - a + 1;
		int copy[size];
		for (int j=a; j<=b; j++) copy[j-a] = arr[j];
		sort(copy, copy + size);
		cout << copy[c - 1] << '\n';
	}
	return (0);
}
