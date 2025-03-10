// 에어팟
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, a, decrease=0, tmp=0, battery=0; cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a;
		if (tmp == a) decrease *= 2;
		else {
			tmp = a;
			decrease = 2;
		}
		battery += decrease;
		if (battery >= 100) {
			battery = 0;
			tmp = 0;
			decrease = 0;
		}
	}
	cout << battery;
	return (0);
}