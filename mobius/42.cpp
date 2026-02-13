// 피보나치 수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int dp[50] = {0};
	dp[1] = 1;
	dp[2] = 1;
	for (int i=3; i<=n; i++) dp[i] = dp[i - 1] + dp[i - 2];
	cout << dp[n];
	return (0);
}