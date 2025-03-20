// Last Factorial Digit
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int find_last_number(int n)
{
	if (n >= 5) return 0;
	int arr[] = {1, 2, 6, 4};
	return arr[n - 1];
}

int main()
{
	fast;
	int t, n; cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;
		cout << find_last_number(n) << '\n';
	}
	return (0);
}