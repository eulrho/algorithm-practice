// 삼각형
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	double w, h;

	cin >> w >> h;
	cout << fixed;
	cout.precision(1);
	cout << w * h * (1.0 / 2.0);
	return (0);
}