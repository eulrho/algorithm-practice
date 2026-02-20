// 4번째 점
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

struct POS {
	double x, y;
};

int main()
{
	fast;
	cout.precision(3);
	cout << fixed;

	POS line1[2], line2[2];
	while (true) {
		for (int i=0; i<2; i++) cin >> line1[i].x >> line1[i].y;
		for (int i=0; i<2; i++) cin >> line2[i].x >> line2[i].y;
		if (cin.eof()) break ;
		if (line1[1].x == line2[1].x && line1[1].y == line2[1].y) {
			cout << line1[0].x - line1[1].x + line2[0].x << " ";
			cout << line1[0].y - line1[1].y + line2[0].y << '\n';
		}
		else if (line1[1].x == line2[0].x && line1[1].y == line2[0].y) {
			cout << line1[0].x - line1[1].x + line2[1].x << " ";
			cout << line1[0].y - line1[1].y + line2[1].y << '\n';
		}
		else if (line1[0].x == line2[1].x && line1[0].y == line2[1].y) {
			cout << line2[0].x - (line1[0].x - line1[1].x) << " ";
			cout << line2[0].y - (line1[0].y - line1[1].y) << '\n';
		}
		else {
			cout << line2[1].x - (line1[0].x - line1[1].x) << " ";
			cout << line2[1].y - (line1[0].y - line1[1].y) << '\n';
		}
	}
	return (0);
}