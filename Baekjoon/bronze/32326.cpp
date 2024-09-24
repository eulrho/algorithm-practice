// Conveyor Belt Sushi
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int r, g, b;

	cin >> r >> g >> b;
	cout << r * 3 + g * 4 + b * 5;
	return (0);
}