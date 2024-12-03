// Tournament Selection
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	char letter;
	int cnt=0;

	for (int i=0; i<6; i++) {
		cin >> letter;
		if (letter == 'W') cnt++;
	}
	if (cnt >= 5) cout << 1;
	else if (cnt >= 3) cout << 2;
	else if (cnt >= 1) cout << 3;
	else cout << -1;
	return (0);
}