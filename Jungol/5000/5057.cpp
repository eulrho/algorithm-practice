// 문자열005
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s1, s2; cin >> s1 >> s2;
	string res = s1 + s2;
	reverse(res.begin(), res.end());
	cout << res;
	return 0;
}