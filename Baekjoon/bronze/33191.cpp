// Yalda
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int b; cin >> b;

	int price;
	string items[3] = {"Watermelon", "Pomegranates", "Nuts"};
	for (int i=0; i<3; i++) {
		cin >> price;
		if (b >= price) {
			cout << items[i];
			return 0;
		}
	}
	cout << "Nothing";
	return (0);
}