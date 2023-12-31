// 1로 만들기
#include <iostream>
#define MIN(a, b) (a < b ? a : b);
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int dp[1000001];

int main() {
	fast;
	int n, temp1, temp2;

	cin >> n;
	for (int i=2; i<=n; i++) {
		dp[i] = dp[i-1];
		if (i % 3 == 0)
		{
			temp1 = i/3;
			dp[i] = MIN(dp[i], dp[temp1]);
		}
		if (i % 2 == 0)
		{
			temp2 = i/2;
			dp[i] = MIN(dp[i], dp[temp2]);
		}
		dp[i] += 1;
	}
	cout << dp[n];
	return (0);
}