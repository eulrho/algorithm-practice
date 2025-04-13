// One and Two
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t, n; cin >> t;
	for (int i=0; i<t; i++) {
		cin >> n;

		int arr[n], tmp;
		for (int j = 0; j < n; j++) {
			cin >> tmp;
			tmp = tmp == 2 ? 1 : 0;
			if (j == 0) arr[j] = tmp;
			else arr[j] = arr[j - 1] + tmp;
		}

		int k = -1;
		for (int j = 0; j + 1 < n; j++) {
			if (arr[j] == arr[n - 1] - arr[j]) {
				k = j + 1;
				break ;
			}
		}
		cout << k << '\n';
	}
	return (0);
}