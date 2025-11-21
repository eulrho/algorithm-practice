// 이친수
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	long long arr[n+1];
	arr[0] = 1;
	arr[1] = 1;
	for (int i=2; i<n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[n - 1];
	return (0);
}