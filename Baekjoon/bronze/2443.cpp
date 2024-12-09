// 별 찍기 - 6
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int size = 2 * n - 1;
	for (int i=0; i<n; i++) {
		for (int j=0; j<i; j++) cout << ' ';
		for (int j=i; j<size-i; j++) cout << '*';
		cout << '\n';
	}
	return (0);
}