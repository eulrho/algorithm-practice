// Covid-19
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double p, q; cin >> p >> q;
	if (p <= 50 && q <= 10) cout << "White";
	else if (q > 30) cout << "Red";
	else cout << "Yellow";
	return (0);
}