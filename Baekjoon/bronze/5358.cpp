// Football Team
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;

	while (getline(cin, str)) {
		for (int i=0; i<(int)str.length(); i++) {
			if (str[i] == 'i') cout << 'e';
			else if (str[i] == 'e') cout << 'i';
			else if (str[i] == 'I') cout << 'E';
			else if (str[i] == 'E') cout << 'I';
			else cout << str[i];
		}
		cout << '\n';
	}
	return (0);
}