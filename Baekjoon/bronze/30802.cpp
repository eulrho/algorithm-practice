// 웰컴 키트
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int size[6];
	for (int i=0; i<6; i++) cin >> size[i];
	int t, p; cin >> t >> p;

	int shirts = 0;
	for (int i=0; i<6; i++)
		shirts += size[i] / t + (size[i] % t != 0);
	cout << shirts << '\n';
	cout << n / p << " " << n % p;
	return (0);
}