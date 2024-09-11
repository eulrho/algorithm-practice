// 디미고에 가고 싶어!
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, res=0;

	cin >> a >> b;
	if (a % 2 == 0 && a < b) {
		res++;
		a++;
	}
	res += (int)ceil((double)(b - a + 1) / 2);
	cout << res;
	return (0);
}