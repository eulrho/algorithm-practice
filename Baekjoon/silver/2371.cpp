// 파일 구별하기
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, num, max_cnt=0, min_k=-1; cin >> n;
	vector<vector<int>> files(n);

	for (int i=0; i<n; i++) {
		while (true) {
			cin >> num;
			if (num == -1) break ;
			files[i].push_back(num);
		}
		max_cnt = max(max_cnt, (int)files[i].size());
	}
	for (int i=max_cnt; i>=1; i--) {
		vector<int> arr;
		for (int j=0; j<n; j++) {
			if ((int)files[j].size() < i) arr.push_back(0);
			else if (find(arr.begin(), arr.end(), files[j][i-1]) == arr.end())
				arr.push_back(files[j][i-1]);
			else break ;
		}
		if (arr.size() != n) continue ;
		if (min_k == -1) min_k = i;
		else min_k = min(min_k, i);
	}
	cout << min_k;
	return (0);
}