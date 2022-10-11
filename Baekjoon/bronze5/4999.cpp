// 아!
#include <iostream>
using namespace std;

int main() {
	string a, b; int alen, blen;
	cin >> a >> b;
	alen = a.length();
	blen = b.length();
	if (alen >= blen) cout << "go";
	else cout << "no";
	
	return 0;
}