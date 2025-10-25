// Poziome serca
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string str[] = {" @@@   @@@ ",
				"@   @ @   @",
				"@    @    @",
				"@         @",
				" @       @ ",
				"  @     @  ",
				"   @   @   ",
				"    @ @    ",
				"     @     "};

int main()
{
	fast;
	int n; cin >> n;
	for (int i=0; i<9; i++) {
		for (int j=0; j<n; j++)
			cout << str[i] << " ";
		cout << '\n';
	}
	return (0);
}