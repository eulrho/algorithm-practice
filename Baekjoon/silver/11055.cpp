// 가장 큰 증가하는 부분 수열
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	int a[n];
	int arr[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
		arr[i] = a[i];
	}

	for (int i=1; i<n; i++) {
		int j = i-1, max_value = 0;
		while (j >= 0) {
			if (a[i] > a[j]) max_value = max(max_value, arr[j]);
			j--;
		}
		arr[i] += max_value;
	}
	int result = 0;
	for (int i=0; i<n; i++) result = max(result, arr[i]);
	cout << result;
	return (0);
}