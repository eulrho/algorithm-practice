// 다리 놓기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, n, m;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n >> m;
		int dp[30][30] = {0, }, sum=0;

		for (int j=n; j>=1; j--) {
			for (int k=m-(n-j); k>=j; k--) {
				if (j == n) dp[j][k] = 1;
				else
					dp[j][k] = dp[j][k+1] + dp[j+1][k+1];
			}
		}
		for (int k=m-n+1; k>=1; k--) sum += dp[1][k];
		cout << sum << '\n';
	}
	return (0);
}