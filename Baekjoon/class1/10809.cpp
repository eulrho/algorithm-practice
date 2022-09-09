// 알파벳 찾기
/* 알파벳 소문자로만 이루어진 단어 S가 주어진다. 
각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
*/
#include <iostream>
using namespace std;

int main() {
	int len, alpabet[26]; fill_n(alpabet, 26, -1);
	string s;
	
	cin >> s;
	len = s.length();

	for (int i = 0; i < len; i++) {
		if (alpabet[s[i] - 97] == -1)
			alpabet[s[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << alpabet[i] << " ";
	}

	return 0;
}