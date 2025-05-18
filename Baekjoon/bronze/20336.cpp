// Haughty Cuisine
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, d;
	string menu;
	cin >> n >> d;
	cout << d << '\n';
	for (int i=0; i<d; i++) {
		cin >> menu;
		cout << menu << '\n';
	}
	return (0);
}