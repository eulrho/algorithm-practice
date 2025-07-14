// Acres
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double a, b; cin >> a >> b;
	cout << (int)ceil(a * b / (5.0 * 4840.0));
	return (0);
}