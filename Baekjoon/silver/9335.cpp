// 소셜 광고
#include <iostream>
#include <vector>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int min_ad;

vector<int> is_clear(bool *arr, int idx, vector<vector<int>> friends)
{
	vector<int> res;

	if (!arr[idx]) res.push_back(idx);
	for (int i=0; i<(int)friends[idx].size(); i++) {
		if (!arr[friends[idx][i]]) res.push_back(friends[idx][i]);
	}
	return res;
}

void find_min_ad(int n, bool *arr, vector<vector<int>> friends, int idx, int cnt)
{
	if (cnt >= min_ad) return ;
	if (idx == n + 1) {
		for (int i=1; i<=n; i++) {
			if (!arr[i]) return ;
		}
		min_ad = min_ad > cnt ? cnt : min_ad;
		return ;
	}
	vector<int> v = is_clear(arr, idx, friends);

	find_min_ad(n, arr, friends, idx + 1, cnt);
	if (v.empty()) return ;
	for (int j=0; j<(int)v.size(); j++)
		arr[v[j]] = true;
	find_min_ad(n, arr, friends, idx + 1, cnt + 1);
	for (int j=0; j<(int)v.size(); j++)
		arr[v[j]] = false;
}

int main()
{
	fast;
	int t, n, f_cnt, num;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;
		min_ad = 30;
		vector<vector<int>> friends(n+1);
		bool arr[21] = {false, };

		for (int k=1; k<=n; k++) {
			cin >> f_cnt;
			for (int j=1; j<=f_cnt; j++) {
				cin >> num;
				friends[k].push_back(num);
			}
		}
		find_min_ad(n, arr, friends, 1, 0);
		cout << min_ad << '\n';
	}
	return (0);
}