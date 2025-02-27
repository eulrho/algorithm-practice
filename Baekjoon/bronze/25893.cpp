// Majestic 10
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;

	int arr[3];
	for (int i=0; i<n; i++) {
		for (int j=0; j<3; j++) cin >> arr[j];

		int cnt = 0;
		for (int j=0; j<3; j++) {
			if (arr[j] >= 10) cnt++;
		}

		for (int j=0; j<3; j++) cout << arr[j] << ' ';
		cout << '\n';
		switch (cnt) {
			case 0:
				cout << "zilch\n";
				break ;
			case 1:
				cout << "double\n";
				break ;
			case 2:
				cout << "double-double\n";
				break ;
			case 3:
				cout << "triple-double\n";
				break ;
		}
		cout << '\n';
	}
	return (0);
}