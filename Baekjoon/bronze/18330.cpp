// Petrol
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, k;
	cin >> n >> k;

	k += 60;
	if (k >= n) cout << n * 1500;
	else cout << k * 1500 + (n - k) * 3000;
	return (0);
}