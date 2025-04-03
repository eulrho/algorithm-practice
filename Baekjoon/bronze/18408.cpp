// 3 つの整数 (Three Integers)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, one=0, two=0;
	for (int i=0; i<3; i++) {
		cin >> n;
		if (n == 1) one++;
		else two++;
	}
	if (one > two) cout << 1;
	else cout << 2;
	return (0);
}