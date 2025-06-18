// 노트북 세 대를 가지고 왔다
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int a, b; cin >> a >> b;
	cout << min(a, b);
	return (0);
}