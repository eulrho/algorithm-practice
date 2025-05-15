// Shattered Cake
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int W, n; cin >> W >> n;

	int tmp = 0;
	int wi, li;
	for (int i=0; i<n; i++) {
		cin >> wi >> li;
		tmp += wi * li;
	}
	cout << tmp / W;
	return (0);
}