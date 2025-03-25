// 바둑돌 게임
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define SUM(a) ((1 + a) * a / 2)

int find_min_cnt(int n)
{
	int i = 1;
	while (SUM(i) < n) i++;

	if (SUM(i) == n) {
		if (i % 2 == 1) return 0;
		else return i + 1;
	}
	else {
		int tmp = SUM(i) - n;
		if (i % 2 == 1) return tmp;
		else return 0;
	}
}

int main()
{
	fast;
	int n; cin >> n;

	cout << find_min_cnt(n);
	return (0);
}
