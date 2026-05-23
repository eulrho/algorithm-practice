// 거스름돈
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

long long max_limit(long long num) {
	return num % 1000000007;
}

int solution(int n, vector<int> money) {
	int answer = 0;
	long long dp[100001] = {0};
	dp[0] = 1;
	sort(money.begin(), money.end());
	for (int i=0; i<(int)money.size(); i++) {
		for (int j=1; j<=n; j++) {
			if (money[i] > j) continue ;
			else if (i == 0) {
				if (j % money[i] == 0) dp[j] = 1;
			}
			else dp[j] = max_limit(dp[j] + dp[j - money[i]]);
		}
	}
	return answer;
}

int main()
{
	fast;
	int n = 5;
	vector<int> money = {3, 2, 5};
	cout << solution(n, money);
	return (0);
}