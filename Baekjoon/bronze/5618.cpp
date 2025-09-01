// 공약수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int arr[n], min_num = 100000000;
	for (int i=0; i<n; i++) {
		cin >> arr[i];
		min_num = min(min_num, arr[i]);
	}
	for (int i=1; i<=min_num; i++) {
		bool check = true;
		for (int j=0; j<n; j++) {
			if (arr[j] % i != 0) check = false;
		}
		if (check) cout << i << '\n';
	}
	return (0);
}