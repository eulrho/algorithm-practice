// SciComLove (2025)
#include <iostream>
#include <string>
#define fast ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main()
{
	fast;
	string str; cin >> str;
	string sample = "SciComLove";
	int result = 0;
	for (int i=0; i<10; i++)
		result += sample[i] != str[i];
	cout << result;
	return (0);
}