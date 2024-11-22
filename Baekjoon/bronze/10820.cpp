// 문자열 분석
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;
	while (getline(cin, str)) {
		int upper=0, lower=0, number=0, space=0;
		for (int i=0; i<(int)str.size(); i++) {
			if (str[i] <= 'z' && str[i] >= 'a') lower++;
			else if (str[i] <= 'Z' && str[i] >= 'A') upper++;
			else if (str[i] == ' ') space++;
			else number++;
		}
		cout << lower << ' ' << upper << ' ' << number << ' ' << space << '\n';
	}
	return (0);
}