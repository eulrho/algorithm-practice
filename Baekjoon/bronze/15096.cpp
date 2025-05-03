// Batter Up
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, a, res=0, size;
	cin >> n;
	size = n;
	for (int i=0; i<n; i++) {
		cin >> a;
		if (a == -1) size--;
		else res += a;
	}
	cout.precision(3);
	cout << fixed;
	cout <<  (double)res / size;
	return (0);
}