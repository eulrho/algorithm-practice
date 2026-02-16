// hashmap 기본
#include <iostream>
#include <unordered_map>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	unordered_map<int, int> u_map;
	string cmd;
	int k, v;
	for (int i=0; i<n; i++) {
		cin >> cmd >> k;
		if (cmd == "find") {
			if (u_map.find(k) == u_map.end()) cout << "None\n";
			else cout << u_map[k] << '\n';
		}
		else if (cmd == "add") {
			cin >> v;
			u_map[k] = v;
		}
		else u_map.erase(k);
	}
	return (0);
}