// 집합
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int m, x, arr[21] = {0, };
	string command;

	cin >> m;
	for (int i=0; i<m; i++) {
		cin >> command;
		if (command != "all" && command != "empty")
			cin >> x;
		if (command == "add") arr[x] = 1;
		else if (command == "remove") arr[x] = 0;
		else if (command == "check") cout << arr[x] << '\n';
		else if (command == "toggle") {
			if (arr[x] == 1) arr[x] = 0;
			else arr[x] = 1;
		}
		else if (command == "all") {
			for (int j=1; j<=20; j++)
				arr[j] = 1;
		}
		else {
			for (int j=1; j<=20; j++)
				arr[j] = 0;
		}
	}
	return (0);
}