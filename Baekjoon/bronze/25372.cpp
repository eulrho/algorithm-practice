// 성택이의 은밀한 비밀번호
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int n, size;
	string str;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> str;
		size = (int)str.size();
		if (size >= 6 && size <= 9) cout << "yes\n";
		else cout << "no\n";
	}
	return (0);
}