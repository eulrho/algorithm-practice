// Lucky 7
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string number;
	size_t n;
	bool flag1, flag2;

	cin >> number;
	n = number.find("7");
	flag1 = n != string::npos;
	flag2 = stoi(number) % 7 == 0;
	if (flag1 && flag2) cout << 3;
	else if (flag1 && !flag2) cout << 2;
	else if (!flag1 && flag2) cout << 1;
	else cout << 0;
	return (0);
}