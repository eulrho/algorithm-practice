// 평행사변형
#include <iostream>
#include <cmath>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool is_parallelogram(double xa, double ya, double xb, double yb, double xc, double yc)
{
	if (xa == xb) return (xc != xa);
	else if (ya == yb) return (yc != ya);
	else return ((ya - yb) / (xa - xb) != (ya - yc) / (xa - xc));
}

double distance(int x1, int x2, int y1, int y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
	fast;
	double xa, ya, xb, yb, xc, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;

	if (!is_parallelogram(xa, ya, xb, yb, xc, yc)) {
		cout << -1;
		return 0;
	}

	double arr[3];
	arr[0] = distance(xa, xb, ya, yb);
	arr[1] = distance(xc, xb, yc, yb);
	arr[2] = distance(xa, xc, ya, yc);

	sort(arr, arr+3);
	double longest_len = (arr[2] + arr[1]) * 2;
	double shortest_len = (arr[0] + arr[1]) * 2;

	cout.precision(9);
	cout << fixed;
	cout << longest_len - shortest_len;
	return (0);
}