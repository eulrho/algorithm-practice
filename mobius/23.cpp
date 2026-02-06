// 2n개 중에 n개의 숫자를 적절하게 고르기
#include <iostream>
#include <cmath>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int min_diff = 200000;

void choice_num(int n, int *arr, int cnt, int idx, int sum, int total) {
	if (cnt == n) {
		min_diff = min(min_diff, abs(total - sum * 2));
		return ;
	}
	for (int i=idx; i<2*n; i++)
		choice_num(n, arr, cnt + 1, i + 1, sum + arr[i], total);
}

int main()
{
	fast;
	int n; cin >> n;
	int arr[101], total = 0;
	for (int i=0; i<2*n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	choice_num(n, arr, 0, 0, 0, total);
	cout << min_diff;
	return (0);
}