// Arrangement of Contest
#include <iostream>
#include <string>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool cmp(string &s1, string &s2) {
	return s1[0] < s2[0];
}

int main()
{
	fast;
	int n; cin >> n;
	string str[n];
	for (int i=0; i<n; i++) cin >> str[i];
	sort(str, str + n, cmp);
	char sample = 'A';
	int cnt = 0;
	for (int i=0; i<n; i++) {
		if (sample != str[i][0]) continue ;
		cnt++;
		sample++;
	}
	cout << cnt;
	return (0);
}