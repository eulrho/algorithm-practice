// Egg Drop
#include <iostream>
#include <string>
#include <map>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, k; cin >> n >> k;
	int floor;
	string status;
	int last_safe=1, first_broken=k;
	for (int i=0; i<n; i++) {
		cin >> floor >> status;
		if (status == "BROKEN") first_broken = min(first_broken, floor);
		else last_safe = max(last_safe, floor);
	}
	cout << last_safe + 1 << " " << first_broken - 1;
	return (0);
}