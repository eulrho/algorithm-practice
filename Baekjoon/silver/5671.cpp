// 호탤 방 번호
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m;
	while (true) {
		cin >> n >> m;
		if (cin.eof()) break ;
		int cnt = 0;
		for (int i=n; i<=m; i++) {
			int tmp = i;
			int arr[10] = {0};
			bool check = true;
			while (tmp) {
				if (arr[tmp % 10] == 0) arr[tmp % 10]++;
				else check = false;
				tmp /= 10;
			}
			if (check) cnt++;
		}
		cout << cnt << '\n';
	}
	return (0);
}