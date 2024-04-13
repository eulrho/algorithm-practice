// Correct
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int h, m;

	cin >> h >> m;
	cout << m + (h - 9) * 60;
	return (0);
}