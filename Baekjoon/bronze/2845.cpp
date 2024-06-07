// 파티가 끝나고 난 뒤
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int l, p, num, res[5];

	cin >> l >> p;
	p *= l;
	for (int i=0; i<5; i++) {
		cin >> num;
		res[i] = num - p;
	}
	for (int i=0; i<5; i++) cout << res[i] << ' ';
	return (0);
}