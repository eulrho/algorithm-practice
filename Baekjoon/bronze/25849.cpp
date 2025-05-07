// Briefcases Full of Money
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[6], money[6] = {1, 5, 10, 20, 50, 100}, n;
	for (int i=0; i<6; i++) {
		cin >> n;
		arr[i] = money[i] * n;
	}
	int max_idx = 0;
	for (int i=1; i<6; i++) {
		if (arr[i] >= arr[max_idx]) max_idx = i;
	}
	cout << money[max_idx];
	return (0);
}