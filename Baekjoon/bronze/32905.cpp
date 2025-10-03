// RACI
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, m; cin >> n >> m;

	char c;
	bool isValid = true;
	for (int i=0; i<n; i++) {
		int check = 0;
		for (int j=0; j<m; j++) {
			cin >> c;
			if (c == 'A') check++;
		}
		if (check != 1) isValid = false;
	}
	if (isValid) cout << "Yes";
	else cout << "No";
	return (0);
}