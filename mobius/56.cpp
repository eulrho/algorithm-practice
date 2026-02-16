// 비율 구하기
#include <iostream>
#include <map>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n; cin >> n;
	map<string, int> m;
	string str;
	for (int i=0; i<n; i++) {
		cin >> str;
		if (m.find(str) != m.end()) m[str]++;
		else m[str] = 1;
	}
	double total = 0;
	for (auto s : m)
		total += s.second;

	cout.precision(4);
	cout << fixed;
	for (auto s : m) {
		cout << s.first << " " << (s.second / total * 100) << '\n';
	}
	return (0);
}