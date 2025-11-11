// Triangles
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	int num;
	char ch;
	for (int i=0; i<t; i++) {
		cin >> num >> ch;
		for (int j=0; j<num; j++) {
			for (int k=0; k<=j; k++) cout << ch;
			cout << '\n';
			ch = ch + 1 > 'Z' ? 'A' : ch + 1;
		}
		cout << '\n';
	}
	return (0);
}