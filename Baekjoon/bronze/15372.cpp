// A Simple Problem.
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t;
	long long n;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;
		cout << n * n << '\n';
	}
	return (0);
}