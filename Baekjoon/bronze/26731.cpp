// Zagubiona litera
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	int arr[26] = {0};
	string str; cin >> str;
	for (int i=0; i<25; i++)
		arr[str[i] - 'A']++;
	for (int i=0; i<26; i++) {
		if (arr[i] == 0) cout << (char)('A' + i);
	}
	return (0);
}