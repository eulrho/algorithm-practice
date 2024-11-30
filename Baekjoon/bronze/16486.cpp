// 운동장 한 바퀴
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

#define PI 3.141592

int main()
{
	fast;
	int d1, d2;

	cin >> d1 >> d2;
	cout.precision(6);
	cout << fixed;
	cout << (double)d2 * 2 * PI + d1 * 2;
	return (0);
}