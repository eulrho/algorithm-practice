// 母音を数える (Counting Vowels)
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, cnt=0;
	string s;

	cin >> n >> s;
	for (int i=0; i<n; i++) {
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o')
			cnt++;
	}
	cout << cnt;
	return (0);
}