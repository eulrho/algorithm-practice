// An Easy-Peasy Problem
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int s1, s2;

	cin >> s1 >> s2;
	if ((int)ceil((double)s2 / 2) <= s1) cout << "E";
	else cout << "H";
	return (0);
}