// KMP는 왜 KMP일까?
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;
	string result;
	for (int i=0; i<(int)str.size(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') result += str[i];
	}
	cout << result;
	return (0);
}