// 2, 4, 6, 8
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void seperate(int n, int &a, int &b) {
	b = n % 10;
	n /= 10;
	a = n;
}

int main()
{
	fast;
	for (int i=10; i<100; i++) {
		int a, b;
		seperate(i, a, b);
		if ((b * 10 + a) % 4 != 0) continue ;
		if ((a + b) % 6 != 0) continue ;
		if (a == 8 || b == 8) continue ;
		cout << i;
		break ;
	}
	return (0);
}