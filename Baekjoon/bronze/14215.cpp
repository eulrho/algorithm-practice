// 세 막대
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[3];
	for (int i=0; i<3; i++) cin >> arr[i];
	sort(arr, arr + 3);

	int sum = arr[0] + arr[1] + arr[2];
	if (arr[2] >= arr[0] + arr[1]) sum -= (arr[2] - (arr[0] + arr[1]) + 1);
	cout << sum;
	return (0);
}