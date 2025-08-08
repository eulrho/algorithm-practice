// 햄버거 만들기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b; cin >> a >> b;
	cout << min(a / 2, b);
	return (0);
}