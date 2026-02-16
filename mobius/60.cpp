// 숫자 빠르게 찾기 2
#include <iostream>
#include <set>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	set<int> s;
	int num;
	for (int i=0; i<n; i++) {
		cin >> num;
		s.insert(num);
	}
	for (int i=0; i<m; i++) {
		cin >> num;
		auto iter = s.lower_bound(num);
		if (iter == s.end()) cout << "-1\n";
		else cout << *iter << '\n';
	}
	return (0);
}