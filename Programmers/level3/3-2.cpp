// N으로 표현
#include <iostream>
#include <set>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string create_str(int n, int cnt) {
	string res;
	for (int i=0; i<cnt; i++)
		res += to_string(n);
	return res;
}

int find_min_cnt(int N, int number) {
	vector<vector<int>> dp(10, vector<int>(0));
	for (int i=1; i<9; i++) {
		set<int> new_num;
		new_num.insert(stoi(create_str(N, i)));
		for (int j=1; j<i; j++) {
			for (auto dp_num : dp[i-j]) {
				for (auto dp_num2 : dp[j]) {
					new_num.insert(dp_num + dp_num2);
					new_num.insert(dp_num - dp_num2);
					new_num.insert(dp_num * dp_num2);
					if (dp_num != 0 && dp_num2 != 0)
						new_num.insert(dp_num / dp_num2);
				}
			}
		}
		for (auto num : new_num)
		{
			if (num == number) return i;
			else dp[i].push_back(num);
		}
	}
	return -1;
}

int solution(int N, int number) {
	int answer = 0;
	if (N == number) return 1;

	answer = find_min_cnt(N, number);
	return answer;
}

int main()
{
	fast;
	int N = 5, number = 12;

	cout << solution(N, number);
	return (0);
}