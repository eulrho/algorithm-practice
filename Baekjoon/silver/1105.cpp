// 팔
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int l, r;
	cin >> l >> r;

	string str = to_string(l);
	int l_len = (int)str.size();

	int cnt=0;
	for (int i=1; i<=l_len; i++) {
		if (l % 10 == 8 && l + 1 > r) cnt++;
		l /= 10;
		r /= 10;
	}
	cout << cnt;
	return (0);
}