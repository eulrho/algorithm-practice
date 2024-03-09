// Rats
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n1, n2, n12, N;

	cin >> n1 >> n2 >> n12;
	N = (int)floor((n1 + 1) * (n2 + 1)/(n12 + 1) - 1);
	cout << N;
	return (0);
}