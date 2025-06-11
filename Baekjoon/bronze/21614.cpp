// Secret Instructions
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string input;
	int direct = 0;
	while (true) {
		cin >> input;
		if (input == "99999") break ;
		int tmp = input[0] - '0' + input [1] - '0';
		if (tmp % 2 == 1) direct = -1;
		else if (tmp != 0 && tmp % 2 == 0) direct = 1;

		if (direct == 1) cout << "right ";
		else cout << "left ";
		cout << stoi(input.substr(2)) << '\n';
	}
	return (0);
}