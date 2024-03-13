// 달달함이 넘쳐흘러
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a[3], c[3];

	for (int i=0; i<3; i++) cin >> a[i];
	for (int i=0; i<3; i++) cin >> c[i];
	cout << c[0] - a[2]<< ' ' << c[1] / a[1] << ' ' << c[2] - a[0];
	return (0);
}
