// Alphabetic Shift
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

void trans(char &a) {
	a -= 1;
	a = a < 'A' ? 'Z' : a;
}

void move(string &str) {
	for (int i=0; i<(int)str.size(); i++)
		trans(str[i]);
}

int main()
{
	fast;
	string str; cin >> str;
	for (int i=0; i<26; i++)
	{
		cout << str << '\n';
		move(str);
	}
	return (0);
}