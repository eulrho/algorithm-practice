// SASA 모형을 만들어보자
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	cout << min(n / 2, m / 2);
	return (0);
}