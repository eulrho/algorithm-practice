// CAPS
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;

	cin >> str;
	for (int i=0; i<str.size(); i++)
		cout << (char)(str[i] - ('a' - 'A'));
	return (0);
}