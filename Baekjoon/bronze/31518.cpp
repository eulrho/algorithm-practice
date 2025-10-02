// Triple Sevens
#include <iostream>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	bool isNormal = true;
	for (int i=0; i<3; i++) {
		bool check = false;
		int num;
		for (int j=0; j<n; j++) {
			cin >> num;
			if (num == 7) check = true;
		}
		if (!check) isNormal = false;
	}
	if (isNormal) cout << 777;
	else cout << 0;
	return (0);
}