// Loteria Falha
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string number;

	while (true) {
		cin >> number;
		if (number == "0") break ;
		int tmp=0, res;

		if (number.length() == 1 || (number.length() == 2 && stoi(number) < 42))
			res = stoi(number);
		else {
			for (int i=1; i<number.length(); i++) {
				if (i == 1) tmp = stoi(number.substr(0, 2));
				else tmp = tmp * 10 + stoi(number.substr(i, 1));
				tmp %= 42;
			}
			res = tmp;
		}
		if (res == 0) cout << "PREMIADO\n";
		else cout << "TENTE NOVAMENTE\n";
	}
	return (0);
}