// 개수 세기
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, arr[201] = {0, }, num, v;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> num;
		arr[num + 100]++;
	}
	cin >> v;
	cout << arr[v + 100];
	return (0);
}