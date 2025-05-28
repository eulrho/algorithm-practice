// 특식 배부
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, a, b, c; cin >> n >> a >> b >> c;
	cout << min(n, a) + min(n, b) + min(n, c);
	return (0);
}