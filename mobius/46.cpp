// 서로 다른 BST 개수 세기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int dp[20] = {0};
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 5;
	for (int i=4; i<=n; i++) {
		for (int j=0; j<i; j++)
			dp[i] += dp[j] * dp[i - j - 1];
	}
	cout << dp[n];
	return (0);
}