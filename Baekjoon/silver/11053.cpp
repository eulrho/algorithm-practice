// 가장 긴 증가하는 부분 수열
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int arr[n+1];
	arr[0] = 0;
	for (int i=1; i<=n; i++) cin >> arr[i];

	int cnt[1001] = {0}, result = 1;
	cnt[0] = 0;
	cnt[1] = 1;
	for (int i=2; i<=n; i++) {
		int tmp = i - 1, left=-1;
		while (tmp >= 0) {
			if (arr[tmp] < arr[i] && (left == -1 || left < cnt[tmp]))
				left = cnt[tmp];
			tmp--;
		}
		cnt[i] = left + 1;
		result = max(result, cnt[i]);
	}
	cout << result;
	return (0);
}