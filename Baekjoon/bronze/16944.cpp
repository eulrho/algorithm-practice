// 강력한 비밀번호
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

enum { LOWER, UPPER, NUMBER, CHAR };

int main()
{
	fast;
	int n; cin >> n;
	string s; cin >> s;

	int cnt = 0;
	int arr[4] = {0};
	for (int i=0; i<n; i++) {
		if (s[i] >= '0' && s[i] <= '9') arr[NUMBER]++;
		else if (s[i] >= 'a' && s[i] <= 'z') arr[LOWER]++;
		else if (s[i] >= 'A' && s[i] <= 'Z') arr[UPPER]++;
		else arr[CHAR]++;
	}
	for (int i=0; i<4; i++) {
		if (arr[i] == 0) cnt++;
	}
	if (n + cnt < 6) cnt += 6 - (n + cnt);
	cout << cnt;
	return (0);
}