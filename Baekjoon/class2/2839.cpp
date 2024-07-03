// 설탕 배달
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int dp[5001];

int main()
{
	fast;
	int n;

	cin >> n;
	for (int i=1; i<=n; i++) {
		if (i >= 3 && i % 3 == 0) dp[i] = i / 3;
		if (i >= 5) {
			if (i % 5 == 0) dp[i] = i / 5;
			else if (dp[i] != 0 && dp[i - 5] != 0)
				dp[i] = min(dp[i], dp[i - 5] + 1);
			else if (dp[i] == 0 && dp[i - 5] != 0)
				dp[i] = dp[i - 5] + 1;
		}
	}
	if (dp[n] == 0) cout << -1;
	else cout << dp[n];
	return (0);
}