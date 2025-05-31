// (중략)
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

string solution(string s, int n) {
	int start = 11, end = n - 12;
	for (int i=start; i<end; i++) {
		if (s[i] == '.')
			return s.substr(0, 9) + "......" + s.substr(n - 10);
	}
	return s.substr(0, 11) + "..." + s.substr(n - 11);
}

int main()
{
	fast;
	int n;
	string s;

	cin >> n >> s;
	if (n <= 25) cout << s;
	else cout << solution(s, n);
	return (0);
}