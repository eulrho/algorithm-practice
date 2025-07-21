// 생일 축하합니다~
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
//	fast;
	int n; cin >> n;
	string arr[n], tmp;
	for (int i=0; i<n; i++) cin >> arr[i];
	int answer1, answer2;
	for (int i=0; i<n; i++) {
		cout << "? " << arr[i] << '\n';
		cin >> answer1;
		cout << "? " << arr[i] << '\n';
		cin >> answer2;
		if (answer1 == 1 || answer2 == 1) {
			if (answer1 == 1 && answer2 == 1) {
				cout << "! " << arr[i];
				cout << flush;
				return 0;
			}
			else tmp = arr[i];
		}
	}
	cout << "! " << tmp;
	cout << flush;
	return (0);
}