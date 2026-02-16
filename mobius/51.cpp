// 정수 사각형 차이의 최소 2
#include <iostream>
#include <climits>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void initialize(int dp[][100], int board[][100], int n, int low) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (board[i][j] < low) board[i][j] = INT_MAX;
		}
	}
	dp[0][0] = board[0][0];
	for (int i=1; i<n; i++) dp[0][i] = max(dp[0][i-1], board[0][i]);
	for (int i=1; i<n; i++) dp[i][0] = max(dp[i-1][0], board[i][0]);

}

int solve(int dp[][100], int board[][100], int n) {
	for (int i=1; i<n; i++) {
		for (int j=1; j<n; j++)
			dp[i][j] = max(min(dp[i][j-1], dp[i-1][j]), board[i][j]);
	}
	return dp[n-1][n-1];
}

int main()
{
	fast;
	int n; cin >> n;
	int board[100][100] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++)
			cin >> board[i][j];
	}

	int dp[100][100] = {0}, ans=INT_MAX;
	for (int lower_bound=1; lower_bound<=100; lower_bound++) {
		initialize(dp, board, n, lower_bound);
		int upper_bound = solve(dp, board, n);
		if (upper_bound == INT_MAX) continue ;
		ans = min(ans, upper_bound - lower_bound);
	}
	cout << ans;
	return (0);
}