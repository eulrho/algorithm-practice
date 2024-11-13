// 계단 오르기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;

	int step[t+1], score[t+1];
	for (int i=1; i<=t; i++) cin >> step[i];
	for (int i=1; i<=t; i++) score[i] = step[i];

	for (int i=1; i<=t; i++) {
		if (i + 3 <= t) score[i + 3] += score[i] + step[i + 1];
		else if (i + 1 == t) score[i + 1] = max(score[i + 1], score[i] + step[i + 1]);
		if (i + 2 <= t) score[i + 2] = max(score[i + 2], score[i] + step[i + 2]);
	}
	cout << score[t];
	return (0);
}