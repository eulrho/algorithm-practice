// 폴더 폰 자판
#include <iostream>
using namespace std;
int main() {
	int n, count = 1, idx; string s, res; char button; cin >> n >> s;
	char one[5] = { '1', '.', ',', '?', '!' };
	char two[4] = { '2', 'A', 'B', 'C' };
	char three[4] = { '3', 'D', 'E', 'F' };
	char four[4] = { '4', 'G', 'H', 'I' };
	char five[4] = { '5', 'J', 'K', 'L' };
	char six[4] = { '6', 'M', 'N', 'O' };
	char seven[5] = { '7', 'P', 'Q', 'R', 'S' };
	char eight[4] = { '8', 'T', 'U', 'V' };
	char nine[5] = { '9', 'W', 'X', 'Y', 'Z' };

	button = s[0];
	for (int i = 1; i <= n; i++) {
		if (s[i] != button||i==n) {
			if ((button == '7' || button == '9') || button == '1') {
				if (count % 5 != 0) idx = count % 5 - 1;
				else idx = 4;
			}
			else {
				if (count % 4 != 0) idx = count % 4 - 1;
				else idx = 3;
			}
			if (button == '1') res.push_back(one[idx]);
			else if (button == '2') res.push_back(two[idx]);
			else if (button == '3') res.push_back(three[idx]);
			else if (button == '4') res.push_back(four[idx]);
			else if (button == '5') res.push_back(five[idx]);
			else if (button == '6') res.push_back(six[idx]);
			else if (button == '7') res.push_back(seven[idx]);
			else if (button == '8') res.push_back(eight[idx]);
			else if (button == '9') res.push_back(nine[idx]);
			count = 1; button = s[i];
		}
		else count++;
	}
	cout << res;
	return 0;
}