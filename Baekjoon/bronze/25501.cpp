// 재귀의 귀재
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int cnt;

int recursion(string s, int l, int r){
	while (l < r) {
		cnt++;
		if (s[l] != s[r]) return 0;
		else {
			l++;
			r--;
		}
	}
	cnt++;
	return 1;
}

int isPalindrome(string s){
	return recursion(s, 0, s.size()-1);
}

int main()
{
	fast;
	int t; cin >> t;
	string str;
	for (int i=0; i<t; i++) {
		cin >> str;
		cnt = 0;
		int tmp = isPalindrome(str);
		cout << tmp << " " << cnt << '\n';
	}
	return (0);
}