// Overdraft
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int total = 0, tmp, result = 0;
	for (int i=0; i<n; i++) {
		cin >> tmp;
		if (total + tmp < 0) {
			result += abs(total + tmp);
			total = 0;
		}
		else total += tmp;
	}
	cout << result;
	return (0);
}