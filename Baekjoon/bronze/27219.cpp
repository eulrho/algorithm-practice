// Робинзон Крузо
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, a, b;

	cin >> n;
	a = n / 5; b = n % 5;
	for (int i=0; i<a; i++) cout << 'V';
	for (int i=0; i<b; i++) cout << 'I';
	return (0);
}