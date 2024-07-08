// 목표량
#include <iostream>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int nbr_len(int number)
{
	int idx = 0;

	while (number) {
		idx++;
		number /= 10;
	}
	return idx;
}

int main()
{
	fast;
	int len, number;

	cin >> number;
	len = nbr_len(number);

	if (len == 1) {
		cout << number;
		return (0);
	}

	int arr[len];
	for (int i=len-1; i>=0; i--) {
		arr[i] = number % 10;
		number /= 10;
	}

	int idx = len - 2;
	while (idx >= 0) {
		int j = idx + 1;
		while (j < len && arr[idx] >= arr[j])
			j++;
		if (j != len) {
			sort(arr + idx + 1, arr + len);
			int l = idx + 1;
			while (l < len && arr[idx] >= arr[l])
				l++;
			int tmp = arr[idx];
			arr[idx] = arr[l];
			arr[l] = tmp;
			break ;
		}
		idx--;
	}
	for (int i=0; i<len; i++) cout << arr[i];
	return (0);
}