// 만취한 상범
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, n;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;

		bool arr[n+1];
		for (int j=1; j<=n; j++) arr[j] = true;
		for (int j=2; j<=n; j++) {
			for (int k=1; k<=n; k++) {
				if (k % j == 0)
					arr[k] ^= 1;
			}
		}

		int cnt=0;
		for (int j=1; j<=n; j++) {
			if (arr[j]) cnt++;
		}
		cout << cnt << '\n';
	}
	return (0);
}