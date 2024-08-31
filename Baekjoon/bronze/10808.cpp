// 알파벳 개수
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[26] = {0, };
	string str;

	cin >> str;
	for (int i=0; i<(int)str.size(); i++) {
		arr[str[i]-'a']++;
	}
	for (int i=0; i<26; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	return (0);
}