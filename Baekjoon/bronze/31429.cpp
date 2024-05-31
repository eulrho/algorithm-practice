// SUAPC 2023 Summer
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n;
	int cnt[11] = {12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6};
	int sum[11] = {1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773};

	cin >> n;
	cout << cnt[n-1] << ' ' << sum[n-1];
	return (0);
}