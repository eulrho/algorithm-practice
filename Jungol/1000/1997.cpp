// 떡 먹는 호랑이
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool f_end = false;

void find_days(int arr[], int d) {
	for (int i = d; i >= 1; i--) {
		arr[i] = arr[i + 2] - arr[i + 1];
		if (arr[i] > arr[i + 1] || i == 1 && arr[1] == 0) return ;
	}
	f_end = true;
}

int main()
{
    fast;
    int d, k; cin >> d >> k;
    int arr[35] = {0};
    arr[d] = k;
	for (int i=(arr[d]) / 2; i>=1; i--) {
		if (f_end) break ;
		arr[d - 1] = arr[d] - i;
		find_days(arr, d - 2);
	}
    cout << arr[1] << "\n" << arr[2];
    return 0;
}