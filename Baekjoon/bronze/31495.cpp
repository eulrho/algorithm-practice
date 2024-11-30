// 그게 무슨 코드니..
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;
	getline(cin, str);

	int size = (int)str.size();
	if ((str[0] != '"' || str[size-1] != '"') || size <= 2) cout << "CE";
	else cout << str.substr(1, size-2);
	return (0);
}