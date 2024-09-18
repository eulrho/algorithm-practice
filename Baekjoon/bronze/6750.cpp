// Rotating letters
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool check_character(char c)
{
	string sample = "IOSHZXN";

	for (int j=0; j<(int)sample.length(); j++) {
		if (sample[j] == c) return true;
	}
	return false;
}

int main()
{
	fast;
	string str;

	cin >> str;
	for (int i=0; i<(int)str.length(); i++) {
		if (!check_character(str[i])) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return (0);
}