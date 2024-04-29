// ゾロ目 (Same Numbers)
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string number;

	cin >> number;
	if (number[0] == number[1]) cout << 1;
	else cout << 0;
	return (0);
}