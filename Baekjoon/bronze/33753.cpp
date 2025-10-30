// 주차 요금 정산하기
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c, t;
	cin >> a >> b >> c >> t;
	if (t <= 30) cout << a;
	else cout << a + (int)ceil((double)(t - 30) / b) * c;
	return (0);
}