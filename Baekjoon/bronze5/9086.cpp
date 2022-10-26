// 문자열
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, len; string str;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> str;
		len = str.length();
		cout << str[0] << str[len - 1] << "\n";
	}

	return 0;
}