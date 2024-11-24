// 삼각 무늬 - 2
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;

	int a, b;
	for (int i=0; i<t; i++) {
		cin >> a >> b;
		cout << (long long)ceil(pow(a, 2) / pow(b, 2)) << '\n';
	}
	return (0);
}