// 바코드 닉네임
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	string s; cin >> s;
	for (int i=0; i<n; i++) {
		if (s[i] == 'l') s[i] = 'L';
		else s[i] = 'i';
	}
	cout << s;
	return (0);
}