// Longest Decreasing Suffix
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int t; cin >> t;
	string str;
	for (int i=0; i<t; i++) {
		cin >> str;
		int start=(int)str.size() - 1;
		for (; start>0; start--) {
			if (str[start] < str[start - 1]) continue ;
			break ;
		}
		cout << "The longest decreasing suffix of " << str << " is ";
		cout << str.substr(start) << '\n';
	}
	return (0);
}
