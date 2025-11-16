// 작도하자! - ②
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int c, b; cin >> c >> b;
	cout << fixed;
	cout.precision(6);
	cout << (double)c / b;
	return (0);
}