// 공
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void swap(bool *arr, int x, int y)
{
	bool tmp = arr[x];
	arr[x] = arr[y];
	arr[y] = tmp;
}

int main()
{
	fast;
	int m, x, y;
	bool arr[3] = {true, false, false};

	cin >> m;
	for (int i=0; i<m; i++) {
		cin >> x >> y;
		swap(arr, x-1, y-1);
	}
	for (int i=0; i<3; i++) {
		if (arr[i]) {
			cout << i + 1;
			break ;
		}
	}
 	return (0);
}