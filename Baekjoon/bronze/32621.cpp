// 동아리비 횡령
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; getline(cin, str);
	int idx = str.find('+');
	if (str[0] == '0' || idx == (int)str.size() - 1 || idx == string::npos) {
		cout << "No Money";
		return 0;
	}
	string left = str.substr(0, idx);
	bool check = true;
	for (int i=0; i<(int)left.size(); i++) {
		if (left[i] < '0' || left[i] > '9') {
			check = false;
			break ;
		}
	}
	if (check && left == str.substr(idx + 1))
		cout << "CUTE";
	else cout << "No Money";
	return (0);
}