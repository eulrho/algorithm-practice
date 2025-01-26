// Just Round Down
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string x; cin >> x;
	cout << x.substr(0, x.find('.'));
	return (0);
}