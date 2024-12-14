// 생장점
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a;

	while(true) {
		cin >> a;
		if (a == 0) break ;

		int sf, sum=1, removed_branch;
		for (int i=0; i<a; i++) {
			cin >> sf >> removed_branch;
			sum = sum * sf - removed_branch;
		}
		cout << sum << '\n';
	}
	return (0);
}