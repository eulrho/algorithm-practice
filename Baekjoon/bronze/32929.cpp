// UOS 문자열
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str = "UOS";
	int x; cin >> x;
	cout << str[(x - 1) % 3];
	return (0);
}