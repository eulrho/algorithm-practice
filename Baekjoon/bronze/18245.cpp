// 이상환 나라의 암호
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str;
	for (int i=2;;i++) {
		getline(cin, str);
		if (str == "Was it a cat I saw?") break ;

		string tmp;
		for (int j=0; j<(int)str.size(); j+=i)
			tmp += str[j];
		cout << tmp << '\n';
	}
	return (0);
}