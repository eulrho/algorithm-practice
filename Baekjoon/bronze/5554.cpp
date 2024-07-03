// 심부름 가는 길
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c, d, time;

	cin >> a >> b >> c >> d;
	time = a + b + c + d;
	cout << time / 60 << '\n' << time % 60;
	return (0);
}