// 좋은 구간
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int l; cin >> l;
	int arr[l];
	for (int i=0; i<l; i++) cin >> arr[i];
	int n; cin >> n;
	sort(arr, arr + l);
	for (int i=0; i<l; i++) {
		if (arr[i] == n) {
			cout << 0;
			break ;
		}
		else if (arr[i] > n) {
			int tmp = i == 0 ? 1 : arr[i - 1] + 1;
			int cnt=0;
			for (int j=tmp; j<=n; j++) {
				for (int k=j==n?n+1:n; k<arr[i]; k++) cnt++;
			}
			cout << cnt;
			break ;
		}
	}
	return (0);
}