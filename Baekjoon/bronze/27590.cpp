// Sun and Moon
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int ds, ys, dm, ym;
	cin >> ds >> ys >> dm >> ym;
	for (int i = 0; i <= 5000; i++) {
		if ((ds + i) % ys == 0 && (dm + i) % ym == 0) {
			cout << i;
			return 0;
		}
	}
	return (0);
}