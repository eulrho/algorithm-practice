// Grass Seed Inc.
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double c; cin >> c;
	int L; cin >> L;
	double w, l, result=0;
	cout << fixed;
	cout.precision(6);
	for (int i=0; i<L; i++) {
		cin >> w >> l;
		result += w * l * c;
	}
	cout << result;
	return (0);
}