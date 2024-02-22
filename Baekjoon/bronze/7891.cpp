// Can you add this?
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, num1, num2;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> num1 >> num2;
		cout << num1 + num2 << '\n';
	}
	return (0);
}