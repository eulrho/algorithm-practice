// 암호 키
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isValidKey(long long key) {
	if (key % 2 == 0) return false;
	for (int j=3; j<1000000; j+=2) {
		if (key % j == 0) return false;
	}
	return true;
}

int main()
{
	fast;
	int n; cin >> n;
	long long key;
	for (int i=0; i<n; i++) {
		cin >> key;
		if (!isValidKey(key)) cout << "NO\n";
		else cout << "YES\n";
	}
	return (0);
}