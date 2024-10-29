// 공 포장하기
#include <iostream>
#include <algorithm>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[3], res=0;

	for (int i=0; i<3; i++) cin >> arr[i];
	sort (arr, arr+3);
	res += arr[0];
	arr[1] -= arr[0];
	arr[2] -= arr[0];
	if (arr[1] % 3 == 1 && arr[2] % 3 == 1) {
		res++;
		arr[1]--;
		arr[2]--;
	}
	res += (int)ceil((double)arr[1] / 3);
	res += (int)ceil((double)arr[2] / 3);
	cout << res;
	return (0);
}