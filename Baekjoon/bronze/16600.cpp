// 현대 미술
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double a; cin >> a;

	double len = sqrt(a);
	cout.precision(6);
	cout << fixed;
	cout << len * 4;
	return (0);
}