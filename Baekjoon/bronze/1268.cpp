// 임시 반장 정하기
#include <iostream>
#include <vector>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool cmp(pair<int, int> &v1, pair<int, int> &v2)
{
	if (v1.first == v2.first) return (v1.second > v2.second);
	else return (v1.first < v2.first);
}

int main()
{
	fast;
	int n; cin >> n;
	int arr[n][6];
	vector<vector<int>> same_class(n+1);
	vector<pair<int, int>> count_student;
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=5; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i=1; i<=n; i++) {
		for (int j=i+1; j<=n; j++) {
			for (int k=1; k<=5; k++) {
				if (arr[i][k] == arr[j][k] && find(same_class[i].begin(), same_class[i].end(), j) == same_class[i].end()) {
					same_class[i].push_back(j);
					same_class[j].push_back(i);
				}
			}
		}
	}
	for (int i=1; i<=n; i++)
		count_student.emplace_back((int)same_class[i].size(), i);
	sort(count_student.begin(), count_student.end(), cmp);
	cout << count_student[n-1].second;
	return (0);
}