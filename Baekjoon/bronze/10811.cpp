// 바구니 뒤집기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int arr[n];
	for (int i=0; i<n; i++) arr[i] = i + 1;
	int start, end;
	for (int i=0; i<m; i++) {
		cin >> start >> end;
		while (start <= end) {
			int tmp = arr[start - 1];
			arr[start - 1] = arr[end - 1];
			arr[end - 1] = tmp;
			start++;
			end--;
		}
	}
	for (int i=0; i<n; i++) cout << arr[i] << " ";
	return (0);
}