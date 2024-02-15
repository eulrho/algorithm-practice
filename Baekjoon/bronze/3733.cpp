// share
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, s;
	
	while (cin >> n >> s) {
		cout << s / (n + 1) << "\n";
	}

	return 0;
}