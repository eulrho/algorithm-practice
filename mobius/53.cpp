// hashmap 기본
#include <iostream>
#include <unordered_map>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	unordered_map<int, int> u_map;
	int num;
	for (int i=0; i<n; i++) {
		cin >> num;
		if (u_map.find(num) != u_map.end()) u_map[num]++;
		else u_map[num] = 1;
	}
	for (int i=0; i<m; i++) {
		cin >> num;
		if (u_map.find(num) != u_map.end()) cout << u_map[num] << " ";
		else cout << 0 << " ";
	}
	return (0);
}