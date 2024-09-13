// 파일 옮기기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b, c, d;

	cin >> a >> b >> c >> d;
	cout << min(a + d, b + c);
	return (0);
}
