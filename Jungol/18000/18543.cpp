// 이길 수 있었는데
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;
	int max_k = (int)str.size();
	vector<int> res;
	for (int k=1; k<=max_k; k++) {
		int win_a = 0, win_b = 0;
		int a = 0, b = 0;
		for (auto &c : str) {
			if (c == 'A') a++;
			else b++;
			if (a == k || b == k) {
				if (a == k) win_a++;
				else win_b++;
				a = 0;
				b = 0;
			}
		}
		if (win_a > win_b) res.push_back(k);
	}
	cout << res.size() << '\n';
	for (auto& r : res) cout << r << " ";
	return (0);
}