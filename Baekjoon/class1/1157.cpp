// 단어 공부
// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char a[1000000], b;
	cin >> a;

	int alp[26] = { 0, }, res=0, count=0;
	int length = strlen(a);
	
	for (int i = 0; i < length; i++) {
		if (a[i] > 90) a[i] = a[i] - 32;
		alp[(int)a[i] - 65]++;
	}

	for (int i = 0; i < 26; i++) {
		if (res <= alp[i]) res = alp[i];
	}

	for (int i = 0; i < 26; i++) {
		if (res == alp[i]) {
			count++;
			b = i+65;
		}
	}

	if (count != 1) cout << "?";
	else cout << b;

	return 0;
}