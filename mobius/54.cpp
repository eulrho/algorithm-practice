// 가장 많은 데이터
#include <iostream>
#include <unordered_map>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	unordered_map<string, int> u_map;
	string str;
	for (int i=0; i<n; i++) {
		cin >> str;
		if (u_map.find(str) != u_map.end()) u_map[str]++;
		else u_map[str] = 1;
	}
	int max_cnt = 0;
	for (auto s : u_map)
		max_cnt = max(max_cnt, s.second);
	cout << max_cnt;
	return (0);
}