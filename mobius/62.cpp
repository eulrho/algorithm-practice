// 최대 숫자 구하기
#include <iostream>
#include <set>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	set<int> s;
	for (int i=1; i<=m; i++) s.insert(i);
	int x;
	for (int i=0; i<n; i++) {
		cin >> x;
		s.erase(x);
		auto back = s.end();
		cout << *(--back) << '\n';
	}

	return (0);
}