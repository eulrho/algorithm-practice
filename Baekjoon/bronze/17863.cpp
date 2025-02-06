// FYI
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string number; cin >> number;
	if (number.substr(0, 3) == "555") cout << "YES";
	else cout << "NO";
	return (0);
}