// 상자넣기
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, box[1001], res=0, cnt[1001];

	cin >> n;
	fill(cnt, cnt+n+1, 1);
	for (int i=1; i<=n; i++) cin >> box[i];
	for (int i=1; i<=n; i++) {
		for (int j=i+1; j<=n; j++) {
			if (box[i] < box[j]) cnt[j] = max(cnt[i] + 1, cnt[j]);
		}
	}
	for (int i=1; i<=n; i++)
		res = max(res, cnt[i]);
	cout << res;
	return (0);
}