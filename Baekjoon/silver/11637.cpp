// 안기 투표
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, n, sum;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;
		sum=0;
		vector<pair<int, int>> vote;
		int number;
		for (int j=0; j<n; j++) {
			cin >> number;
			vote.push_back(make_pair(number, j + 1));
			sum += number;
		}
		sort(vote.begin(), vote.end());
		if (vote[n-1].first == vote[n-2].first)
			cout << "no winner\n";
		else if (vote[n-1].first > sum / 2)
			cout << "majority winner " << vote[n-1].second << '\n';
		else
			cout << "minority winner " << vote[n-1].second << '\n';
	}
	return (0);
}