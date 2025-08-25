// 문문문
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	long long n; cin >> n;
	int door; cin >> door;
	if (n > 6) cout << "Love is open door";
	else {
		for (int i=2; i<=n; i++) {
			door ^= 1;
			cout << door << '\n';
		}
	}
	return (0);
}
