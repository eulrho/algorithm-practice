// 계단 오르기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int dp[1001] = {0};
	dp[2] = 1;
	dp[3] = 1;
	for (int i=4; i<=n; i++) dp[i] = (dp[i - 2] + dp[i - 3]) % 10007;
	cout << dp[n];
	return (0);
}