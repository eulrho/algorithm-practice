// Bookshelf
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, b, h_i[20000], cnt=0, sum=0;

	cin >> n >> b;
	for (int i=0; i<n; i++) cin >> h_i[i];
	sort(h_i, h_i + n);
	for (int i=n-1; i>=0; i--) {
		sum += h_i[i];
		cnt++;
		if (sum >= b) {
			break ;
		}
	}
	cout << cnt;
	return (0);
}