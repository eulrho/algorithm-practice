// Adding Commas
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;
	int size = (int)str.size();
	string tmp;
	for (int i=1; i<=size; i++) {
		tmp = str[size - i] + tmp;
		if (i % 3 == 0 && i != size) tmp = "," + tmp;
	}
	cout << tmp;
	return (0);
}