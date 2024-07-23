// Patyki
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int len[3];

	cin >> len[0] >> len[1] >> len[2];
	sort(len, len + 3);
	if (len[0] == len[2]) cout << 2;
	else if (len[2] * len[2] == len[0] * len[0] + len[1] * len[1]) cout << 1;
	else cout << 0;
	return (0);
}
