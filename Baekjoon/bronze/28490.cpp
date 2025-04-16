// Area
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, h, w, max_area=0; cin >> n;
	for (int i=0; i<n; i++) {
		cin >> h >> w;
		max_area = max(h * w, max_area);
	}
	cout << max_area;
	return (0);
}