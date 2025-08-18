// Starship Hakodate-maru
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;
#define case1(n) (n*n*n)
#define case2(n) (n*(n+1)*(n+2)/(6))

int main()
{
	fast;
	int n;
	while (true) {
		cin >> n;
		if (!n) break ;
		int result = 0;
		for (int i=95; i>=0; i--) {
			int storage2 = case2(i);
			if (storage2 > n) continue ;
			int j=0;
			while (case1(j)<=n-storage2) j++;
			--j;
			int storage1 = case1(j);
			result = max(storage1 + storage2, result);
		}
		cout << result << '\n';
	}
	return (0);
}