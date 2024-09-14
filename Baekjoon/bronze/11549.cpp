// Identifying tea
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, num, res=0;

	cin >> t;
	for (int i=0; i<5; i++) {
		cin >> num;
		if (num == t) res++;
	}
	cout << res;
	return (0);
}