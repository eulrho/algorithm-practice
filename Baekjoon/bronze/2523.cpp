// 별 찍기 - 13
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int size = 2 * n - 1;
	for (int i=0; i<size; i++) {
		if (i < n) {
			for (int j=0; j<=i; j++) cout << '*';
		}
		else {
			for (int j=0; j<size-i; j++) cout << '*';
		}
		cout << '\n';
	}
	return (0);
}