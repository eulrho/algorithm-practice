// 좋은 암호
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool divide_k(string k, int n)
{
	int tmp=0, idx=0;

	while (idx < k.length()) {
		tmp = tmp * 10 + k[idx] - '0';
		if (tmp >= n)
			tmp %= n;
		idx++;
	}
	if (tmp == 0) return true;
	else return false;
}

int main()
{
	fast;
	string k;
	int l;

	cin >> k >> l;
	for (int i=2; i<l; i++) {
		if (divide_k(k, i)) {
			cout << "BAD " << i;
			return (0);
		}
	}
	cout << "GOOD";
	return (0);
}