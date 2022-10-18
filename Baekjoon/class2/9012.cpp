// 괄호
#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, len; cin >> n;
	string ps; stack<char> stk;
	bool success = true;
	
	for (int i = 0; i < n; i++) {
		cin >> ps;
		len = ps.length();
		for (int j = 0; j < len; j++) {
			if (ps[j] == '(') stk.push(ps[j]);
			else if (ps[j] == ')' && stk.empty() != 1) stk.pop();
			else success = false;
			if (j == len - 1 && stk.empty() != 1) success = false;
		}
		if (!success) {
			cout << "NO\n";
			success = true;
			while (!stk.empty()) stk.pop();
		}
		else cout << "YES\n";
	}

	return 0;
} 