// Squares
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;

	cin >> n;
	cout << "The largest square has side length " << (int)sqrt(n) << '.';
	return (0);
}