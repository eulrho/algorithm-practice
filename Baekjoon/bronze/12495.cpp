// Perfect Harmony (Small)
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, n, l, h;

	cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n >> l >> h;

		int arr[n];
		for (int j=0; j<n; j++)
			cin >> arr[j];

		bool flag;
		int f;
		for (f=l; f<=h; f++) {
			flag = true;
			for (int k=0; k<n; k++) {
				if (arr[k] % f != 0 && f % arr[k] != 0) {
					flag = false;
					break ;
				}
			}
			if (flag) break ;
		}
		if (flag)
			cout << "Case #" << i+1 << ": " << f << '\n';
		else cout << "Case #" << i+1 << ": NO" << '\n';
	}
	return (0);
}