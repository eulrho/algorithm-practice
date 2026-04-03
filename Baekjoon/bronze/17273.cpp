// 카드 공장 (Small)
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct INFO {
	int num[2];
	int direct = 0;
};

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int a, b, k;
	vector<INFO> cards;
	for (int i=0; i<n; i++) {
		cin >> a >> b;
		cards.push_back({a, b});
	}
	for (int i=0; i<m; i++) {
		cin >> k;
		for (int j=0; j<n; j++) {
			int idx = cards[j].direct;
			if (cards[j].num[idx] <= k) cards[j].direct ^= 1;
		}
	}
	int sum = 0;
	for (int i=0; i<n; i++) {
		int idx = cards[i].direct;
		sum += cards[i].num[idx];
	}
	cout << sum;
	return (0);
}