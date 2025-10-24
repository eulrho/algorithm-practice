// Skarpetki
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;
	int arr[2] = {0};
	for (int i=0; i<(int)str.size(); i++) {
		if (str[i] == 'B') arr[0]++;
		else arr[1]++;
	}
	cout << arr[0] / 2 + arr[1] / 2;
	return (0);
}