// 입실 관리
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;
	int n;

	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> str;
		for (int j=0; j<(int)str.length(); j++) {
			if (str[j] >= 'A' && str[j] <= 'Z')
				str[j] += 'a' - 'A';
		}
		cout << str << '\n';
	}
	return (0);
}