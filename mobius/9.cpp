// 1차원 젠가
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void remove(int &n, int *arr, int s, int e) {
	int dest = s;
	for (int i = e + 1; i < n; i++)
		arr[dest++] = arr[i];
	n -= (e - s + 1);
}

int main()
{
	fast;
	int n; cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) cin >> arr[i];

	int s, e;
	for (int i=0; i<2; i++) {
		cin >> s >> e;
		remove(n, arr, s - 1, e - 1);
	}
	cout << n << '\n';
	for (int i=0; i<n; i++) cout << arr[i] << '\n';
	return (0);
}