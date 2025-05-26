// 체스 초보 브실이
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;
	int score = 0;
	for (int i=0; i<8; i++) {
		cin >> str;
		for (int j=0; j<(int)str.size(); j++) {
			if (str[j] == 'P') score += 1;
			else if (str[j] == 'N' || str[j] == 'B') score += 3;
			else if (str[j] == 'R') score += 5;
			else if (str[j] == 'Q') score += 9;
			else if (str[j] == 'p') score -= 1;
			else if (str[j] == 'n' || str[j] == 'b') score -= 3;
			else if (str[j] == 'r') score -= 5;
			else if (str[j] == 'q') score -= 9;
		}
	}
	cout << score;
	return (0);
}