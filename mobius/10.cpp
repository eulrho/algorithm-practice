// k개 중에 1개를 n번 뽑기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void choice(int k, int n, int *arr, int size) {
	if (size == n) {
		for (int i=0; i<n; i++) cout << arr[i] << " ";
		cout << '\n';
		return ;
	}

	for (int i=1; i<=k; i++) {
		arr[size] = i;
		choice(k, n, arr, size + 1);
	}
}

int main()
{
	fast;
	int k, n; cin >> k >> n;
	int arr[10];
	choice(k, n, arr, 0);
	return (0);
}