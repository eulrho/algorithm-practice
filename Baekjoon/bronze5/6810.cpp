// ISBN
#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c; cin >> a >> b >> c;
	cout << "The 1-3-sum is " << 91+ a + b * 3 + c;

	return 0;
}