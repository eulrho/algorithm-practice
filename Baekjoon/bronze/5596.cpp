// 시험 점수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a=0, b=0, score;

	for (int i=0; i<4; i++) {
		cin >> score;
		a += score;
	}
	for (int i=0; i<4; i++) {
		cin >> score;
		b += score;
	}
	if (a > b) cout << a;
	else cout << b;
	return (0);
}