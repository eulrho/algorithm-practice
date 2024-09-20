// Eszett
#include <iostream>
#include <string>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;
	cin >> str;

	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << str << '\n';

	int size = (int)str.length();
	for (int i=0; i<size; i++) {
		if (str[i] == 's' && i<size-1 && str[i + 1] == 's') {
			string tmp = str.substr(0, i);
			tmp += 'B';
			tmp += str.substr(i+2);
			cout << tmp << '\n';
		}
	}
	return (0);
}