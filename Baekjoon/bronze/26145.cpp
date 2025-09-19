// 출제비 재분배
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;
	int s[2001] = {0};
	for (int i=0; i<n; i++) cin >> s[i];
	for (int i=0; i<n; i++) {
		int tmp;
		for (int j=0; j<n+m; j++) {
			cin >> tmp;
			s[j] += tmp;
			s[i] -= tmp;
		}
	}
	for (int i=0; i<n+m; i++) cout << s[i] << " ";
	return (0);
}