// 그릇
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;

	char tmp = str[0];
	int height = 10;
	for (int i=1; i<(int)str.size(); i++) {
		if (tmp == str[i]) height += 5;
		else {
			tmp = str[i];
			height += 10;
		}
	}
	cout << height;
	return (0);
}