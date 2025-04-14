// 헛간 청약
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, w, h, l;
	cin >> n >> w >> h >> l;
	cout << min((w / l) * (h / l), n);
	return (0);
}
