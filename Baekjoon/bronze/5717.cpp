// 상근이의 친구들
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int m, f;

	while (true) {
		cin >> m >> f;
		if (m == 0 && f == 0) break ;
		cout << m + f << '\n';
	}
	return (0);
}