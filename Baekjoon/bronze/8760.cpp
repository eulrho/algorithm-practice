// Schronisko
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int z, w, k;

	cin >> z;
	for (int i=0; i<z; i++) {
		cin >> w >> k;
		cout << w * k / 2 << '\n';
	}
	return (0);
}