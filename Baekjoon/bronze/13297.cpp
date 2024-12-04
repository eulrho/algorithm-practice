// Quick Estimates
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	string cost;
	for (int i=0; i<n; i++) {
		cin >> cost;
		cout << cost.size() << '\n';
	}
	return (0);
}