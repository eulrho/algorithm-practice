// Maternity
#include <iostream>
#include <unordered_map>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string a, b, c;
	bool flag;
	unordered_map<char, bool> m;
	int n;

	cin >> a >> b >> n;
	for (int i=0; i<10; i++) {
		if (m.find(a[i]) == m.end()) {
			if (a[i] >= 'A' && a[i] <= 'E') m.insert({a[i], true});
			else m.insert({a[i], false});
		}
	}
	for (int i=0; i<10; i++) {
		if (m.find(b[i]) == m.end()) {
			if (b[i] >= 'A' && b[i] <= 'E') m.insert({b[i], true});
		}
		else if (b[i] >= 'a' && b[i] <= 'e')
			m[b[i]] = true;
	}
	for (int i=0; i<n; i++) {
		cin >> c;
		flag = true;
		for (int j=0; j<5; j++) {
			if (m.find(c[j]) == m.end() || !m[c[j]]) {
				flag = false;
				break ;
			}
		}
		if (flag) cout << "Possible baby.\n";
		else cout << "Not their baby!\n";
	}
	return (0);
}