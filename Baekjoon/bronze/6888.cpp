// Terms of Office
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int x, y;

	cin >> x >> y;
	for (int i=x; i<=y; i+=60) {
		cout << "All positions change in year " << i << '\n';
	}
	return (0);
}