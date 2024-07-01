// 상근날드
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int num, bugger=2000, drink=2000;

	for (int i=0; i<3; i++) {
		cin >> num;
		bugger = min(bugger, num);
	}
	for (int i=0; i<2; i++) {
		cin >> num;
		drink = min(drink, num);
	}
	cout << bugger + drink - 50;
	return (0);
}