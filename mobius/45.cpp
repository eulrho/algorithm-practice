// 사각형 채우기 3
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

long long remainder(long long num) {
	return num % 1000000007;
}

long long mult(int num, int a) {
	long long res = 0;
	for (int i=0; i<a; i++) res = remainder(res + num);
	return res;
}

int main()
{
	fast;
	int n; cin >> n;
	long long dp[1001] = {0};
	long long sum[1001] = {0};
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 7;
	dp[3] = 22;
	sum[0] = 1;
	for (int i=1; i<=3; i++) sum[i] = sum[i - 1] + dp[i];
	for (int i=4; i<=n; i++)
	{
		dp[i] = mult(dp[i - 1], 2);
		dp[i] = remainder(dp[i] + mult(dp[i - 2], 3));
		dp[i] = remainder(dp[i] + mult(sum[i - 3], 2));
		sum[i] = remainder(sum[i - 1] + dp[i]);
	}
	cout << dp[n];
	return (0);
}