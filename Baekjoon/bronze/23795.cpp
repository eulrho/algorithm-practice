// 사장님 도박은 재미로 하셔야 합니다
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, res=0;
	while (true) {
		cin >> n;
		if (n == -1) break ;
		res += n;
	}
	cout << res;
	return (0);
}