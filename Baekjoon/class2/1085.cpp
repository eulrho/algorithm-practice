// 직사각형에서 탈출
// 한수는 지금 (x, y)에 있다. 직사각형은 각 변이 좌표축에 평행하고, 왼쪽 아래 꼭짓점은 (0, 0), 오른쪽 위 꼭짓점은 (w, h)에 있다. 직사각형의 경계선까지 가는 거리의 최솟값을 구하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, w, h, cases[4], min = 1001;
	cin >> x >> y >> w >> h;

	// (x, 0)
	cases[0] = y;
	// (0, y)
	cases[1] = x;
	// (w, y)
	cases[2] = w - x;
	// (x, h)
	cases[3] = h - y;

	for (int i = 0; i < 4; i++) {
		if (min >= cases[i]) min = cases[i];
	}

	cout << min;

	return 0;
}