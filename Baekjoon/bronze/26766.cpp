// Serca
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;

	cin >> n;
	for (int i=0; i<n; i++) {
		cout << " @@@   @@@ \n"
				"@   @ @   @\n"
				"@    @    @\n"
				"@         @\n"
				" @       @ \n"
				"  @     @  \n"
				"   @   @   \n"
				"    @ @    \n"
				"     @     ";
		if (i != n - 1) cout << '\n';
	}
	return (0);
}