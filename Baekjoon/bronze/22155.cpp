// Простая задача
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

bool isValid(int a, int b) {
	if (a > 2 || b > 2) return false;
	if (a == 2 && b == 2) return false;
	return true;
}

int main()
{
	fast;
	int n, a, b;
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> a >> b;
		if (isValid(a, b)) cout << "Yes\n";
		else cout << "No\n";
	}
	return (0);
}