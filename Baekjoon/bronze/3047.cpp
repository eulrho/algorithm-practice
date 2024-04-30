// ABC
#include <iostream>
#include <string>
#include <algorithm>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int num[3];
	string str;

	cin >> num[0] >> num[1] >> num[2] >> str;
	sort(num, num + 3);
	for (int i=0; i<3; i++) {
		cout << num[str[i] - 'A'] << ' ';
	}
	return (0);
}