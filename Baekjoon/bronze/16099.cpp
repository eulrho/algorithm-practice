// Larger Sport Facility
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t;
	long long lt, wt, le, we;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> lt >> wt >> le >> we;
		if (lt * wt > le * we) cout << "TelecomParisTech\n";
		else if (lt * wt < le * we) cout << "Eurecom\n";
		else cout << "Tie" << '\n';
	}
	return (0);
}