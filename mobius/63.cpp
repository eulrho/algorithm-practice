// 가까운 숫자
#include <iostream>
#include <set>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	set<int> s;
	set<int> diff;
	s.insert(0);
	int x;
	for (int i=0; i<n; i++) {
		cin >> x;
		auto iter = s.upper_bound(x);
		if (iter != s.end()) diff.insert(*iter - x);
		iter--;
		diff.insert(x - *iter);
		cout << *(diff.begin()) << '\n';
		s.insert(x);
	}
	return (0);
}